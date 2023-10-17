//List::List()
//{
//	size = 0;
//	head = nullptr;
//}
//
//
//List::List(int siz)
//{
//	size = 0;
//	head = nullptr;
//	Spawn(siz);
//}
//
//
//List::~List()
//{
//	clear();
//	/*cout << "111" << endl;*/
//}
//
//
//List::List(const List& other)
//{
//	int cnt = 0;
//	this->size = other.size;
//
//	Node* current = nullptr;
//	Node* current1 = nullptr;
//	this->head = current;
//
//
//	for (cnt = 0; cnt < this->size; cnt++)
//	{
//		if (head == nullptr)
//		{
//			this->head = new Node(other.head->data);
//			this->tail = this->head;
//		}
//		else
//		{
//			current = other.head;
//			current1 = this->head;
//
//			while (current1->pNext != nullptr)
//			{
//				current = current->pNext;
//				current1 = current1->pNext;
//			}
//			current1->pNext = new Node(current->pNext->data, current1->pNext, current1);
//			this->tail = current1->pNext;
//		}
//	}
//}
//
//
//
//
//
//void List::add(T data)
//{
//	if (head == nullptr)
//	{
//		head = new Node(data);
//		tail = this->head;
//	}
//	else
//	{
//		Node* current = this->head;
//
//		while (current->pNext != nullptr)
//		{
//			current = current->pNext;
//		}
//		current->pNext = new Node(data, current->pNext, current);
//		tail = current->pNext;
//	}
//	size++;
//}
//
//
//void List::insert(T data, int index) {
//	int counter = 0;
//	Node* current = this->head;
//	while (current != nullptr)
//	{
//		if (counter == index)
//		{
//			Node* prev = current->pPrev;
//			Node* newObj = new Node(data, current, prev);
//
//			prev->pNext = newObj;
//			current->pPrev = newObj;
//			break;
//		}
//		current = current->pNext;
//		counter++;
//	}
//	size++;
//
//}
//
//T List::get(int index) {
//	int counter = 0;
//	Node* current = this->head;
//	while (current != nullptr)
//	{
//		if (counter == index)
//		{
//			return current->data;
//		}
//		current = current->pNext;
//		counter++;
//	}
//}
//
//T List::remove(int index) {
//	int counter = 0;
//	Node* current = this->head;
//	while (current != nullptr)
//	{
//		if (counter == index)
//		{
//			Node* prev = current->pPrev;
//			Node* next = current->pNext;
//			prev->pNext = next;
//			next->pPrev = prev;
//			return current->data;
//		}
//		current = current->pNext;
//		counter++;
//	}
//	size--;
//}
//
//void List::clear()
//{
//	Node* temp = head;
//	while (size)
//	{
//		head = head->pNext;
//
//		delete temp;
//
//		size--;
//	}
//}
//
//
//
//
//void List::operator=(const List& other)
//{
//	int cnt = 0;
//	this->size = other.size;
//
//	Node* current = nullptr;
//	Node* current1 = nullptr;
//	this->head = current;
//
//
//	for (cnt = 0; cnt < this->size; cnt++)
//	{
//		if (head == nullptr)
//		{
//			this->head = new Node(other.head->data);
//			this->tail = this->head;
//		}
//		else
//		{
//			current = other.head;
//			current1 = this->head;
//
//			while (current1->pNext != nullptr)
//			{
//				current = current->pNext;
//				current1 = current1->pNext;
//			}
//			current1->pNext = new Node(current->pNext->data, current1->pNext, current1);
//			this->tail = current1->pNext;
//		}
//	}
//}
//
//
//
//
//
//int List::getSize()
//{
//	return size;
//}
//
//int List::request_strt()
//{
//	int strt;
//	cout << "Input the list length: ";
//	cin >> strt;
//	return strt;
//}
//
//
//void List::Show()
//{
//	Node* current = this->head;
//	if (current != nullptr)
//	{
//		while (current->pNext != nullptr)
//		{
//			cout << current->data;;
//			current = current->pNext;
//		}
//		cout << current->data << endl;
//	}
//	else
//		cout << "The list is empty!!!" << endl;
//}
//
//Node::Node(T data, Node* pNext, Node* pPrev)
//{
//	this->data = data;
//	this->pNext = pNext;
//	this->pPrev = pPrev;
//}
//
//
//void operator==(const List& list, T val)
//{
//	bool comp2 = false;
//
//	for (int cnt = 0; cnt < list.size; cnt++)
//	{
//		Node* current = list.head;
//
//		for (int cnt1 = 0; cnt1 != cnt; cnt1++)
//		{
//			current = current->pNext;
//		}
//		if (current->data == val)
//		{
//			comp2 = true;
//		}
//		else
//		{
//			comp2 = false;
//		}
//
//		if (comp2)
//		{
//			cout << "1 ";
//		}
//		else
//		{
//			cout << "0 ";
//		}
//	}
//	cout << endl;
//}