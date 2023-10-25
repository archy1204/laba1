#include"Keeper.h";

Keeper::Keeper()
{
	size = 0;
	head = nullptr;
	cout << "Animal null constructor.\n";
}

Keeper::Keeper(int siz)
{
	size = 0;
	head = nullptr;
	cout << "Animal constructor with parametrs." << endl;
}

Keeper::~Keeper()
{
	clear();
	cout << "Animal destructor." << endl;
}

Keeper::Keeper(const Keeper& other)
{
	int cnt = 0;
	this->size = other.size;

	Node* current = nullptr;
	Node* current1 = nullptr;
	this->head = current;


	for (cnt = 0; cnt < this->size; cnt++)
	{
		if (head == nullptr)
		{
			this->head = new Node(other.head->data);
			this->tail = this->head;
		}
		else
		{
			current = other.head;
			current1 = this->head;

			while (current1->pNext != nullptr)
			{
				current = current->pNext;
				current1 = current1->pNext;
			}
			current1->pNext = new Node(current->pNext->data, current1->pNext, current1);
			this->tail = current1->pNext;
		}
	}
}




void Keeper::add(Animal* data)
{
	if (head == nullptr)
	{
		head = new Node(data);
		tail = this->head;
	}
	else
	{
		Node* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data, current->pNext, current);
		tail = current->pNext;
	}
	size++;
}

void Keeper::insert(Animal* data, int index) {
	int counter = 0;
	Node* current = this->head;
	if (index == size) {
		this->add(data);
		return;
	}
	while (current != nullptr)
	{
		if (counter == index)
		{
			Node* prev = current->pPrev;
			Node* newObj = new Node(data, current, prev);

			if (counter != 0)
				prev->pNext = newObj;
			current->pPrev = newObj;
			if (counter == 0)
				this->head = newObj;
			break;
		}
		current = current->pNext;
		counter++;
	}
	size++;

}

Animal* Keeper::get(int index) {
	int counter = 0;
	Node* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

Animal* Keeper::remove(int index) {
	int counter = 0;
	Node* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			Node* prev = current->pPrev;
			Node* next = current->pNext;
			if (prev != nullptr)
				prev->pNext = next;
			if (next != nullptr)
				next->pPrev = prev;
			if (counter == 0)
				this->head = next;
			size--;
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

void Keeper::clear()
{
	Node* temp;
	while (size > 0)
	{
		temp = head;

		head = head->pNext;


		delete temp;

		size--;
	}
}



void Keeper::operator=(const Keeper& other)
{
	int cnt = 0;
	this->size = other.size;

	Node* current = nullptr;
	Node* current1 = nullptr;
	this->head = current;


	for (cnt = 0; cnt < this->size; cnt++)
	{
		if (head == nullptr)
		{
			this->head = new Node(other.head->data);
			this->tail = this->head;
		}
		else
		{
			current = other.head;
			current1 = this->head;

			while (current1->pNext != nullptr)
			{
				current = current->pNext;
				current1 = current1->pNext;
			}
			current1->pNext = new Node(current->pNext->data, current1->pNext, current1);
			this->tail = current1->pNext;
		}
	}
}




int Keeper::getSize()
{
	return size;
}


void Keeper::show()
{
	Node* current = this->head;
	if (current != nullptr)
	{
		while (current->pNext != nullptr)
		{
			current->data->show();
			current = current->pNext;
		}
		current->data->show();
		cout << endl;
	}
	else
		cout << "The list is empty!!!" << endl;
}

Node::Node(Animal* data, Node* pNext, Node* pPrev)
{
	this->data = data;
	this->pNext = pNext;
	this->pPrev = pPrev;
}

void operator==(const Keeper& list, Animal* val)
{
	bool comp2 = false;

	for (int cnt = 0; cnt < list.size; cnt++)
	{
		Node* current = list.head;

		for (int cnt1 = 0; cnt1 != cnt; cnt1++)
		{
			current = current->pNext;
		}
		if (current->data == val)
		{
			comp2 = true;
		}
		else
		{
			comp2 = false;
		}

		if (comp2)
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}
	cout << endl;
}

void Keeper::importList() {
	ifstream fin("t1.txt");
	clear();
	string breed, color, feedType, feed, habitat, ownerName, nickname, str;
	Fish* fish;
	Bird* bird;
	Cat* cat;
	while (getline(fin, str)) {
		if (str == "fish!") {
			getline(fin, str);
			breed = str;
			getline(fin, str);
			color = str;
			getline(fin, str);
			feedType = str;
			fish = new Fish(breed, color, feedType);
			add(fish);
			continue;
		}
		if (str == "bird!") {
			getline(fin, str);
			breed = str;
			getline(fin, str);
			color = str;
			getline(fin, str);
			feed = str;
			getline(fin, str);
			habitat = str;
			bird = new Bird(breed, color, feed, habitat);
			add(bird);
			continue;
		}
		if (str == "cat!") {
			getline(fin, str);
			breed = str;
			getline(fin, str);
			color = str;
			getline(fin, str);
			ownerName = str;
			getline(fin, str);
			nickname = str;
			cat = new Cat(breed, color, ownerName, nickname);
			add(cat);
			continue;
		}
	}
	cout << "Import is done\n\n";
	fin.close();
}

void Keeper::exportList() {
	string fileName = "t2.txt";
	ofstream fout(fileName);
	fout.close();
	Node* current = this->head;
	for (int i = 0; i < size; i++) {
		current->data->save(fileName);
		current = current->pNext;
	}
	cout << "Export is done\n\n";
}