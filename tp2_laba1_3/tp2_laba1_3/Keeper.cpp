#include "Keeper.h"

Keeper::Keeper() {
	list1 = new List<Fish>();
	list2 = new List<Bird>();
	list3 = new List<Cat>();
	cout << "Keeper constructor." << endl;
}

Keeper::Keeper(List<Fish>* list1, List<Bird>* list2, List<Cat>* list3
) {
	this->list1 = list1;
	this->list2 = list2;
	this->list3 = list3;

	cout << "Copy Keeper constructor." << endl;
}

Keeper::~Keeper() {
	clearFish();
	clearBird();
	clearCat();
	cout << "Keeper destructor." << endl;
}

List<Fish>* Keeper::getFishList() {
	return list1;
}

List<Bird>* Keeper::getBirdList() {
	return list2;
}

List<Cat>* Keeper::getCatList() {
	return list3;
}


//    add 1
void Keeper::addFish(Fish& data) {
	list1->add(data);
}

void Keeper::addFish(Fish& data, int i) {
	list1->insert(data, i);
}
//        2
void Keeper::addBird(Bird& data) {
	list2->add(data);
}

void Keeper::addBird(Bird& data, int i) {
	list2->insert(data, i);
}
//        3
void Keeper::addCat(Cat& data) {
	list3->add(data);
}

void Keeper::addCat(Cat& data, int i) {
	list3->insert(data, i);
}
//



//       get 1
Fish Keeper::getFish(int i) {
	return list1->get(i);
}
//			 2
Bird Keeper::getBird(int i) {
	return list2->get(i);
}
//			 3
Cat Keeper::getCat(int i) {
	return list3->get(i);
}
//



Fish Keeper::removeFish(int i) {
	return list1->remove(i);
}

Bird Keeper::removeBird(int i) {
	return list2->remove(i);
}

Cat Keeper::removeCat(int i) {
	return list3->remove(i);
}


void Keeper::showFish() {
	list1->Show();
}

void Keeper::showBird() {
	list2->Show();
}

void Keeper::showCat() {
	list3->Show();
}


int Keeper::sizeFish() {
	return list1->getSize();
}

int Keeper::sizeBird() {
	return list2->getSize();
}

int Keeper::sizeCat() {
	return list3->getSize();
}

void Keeper::clearFish() {
	list1->clear();
}

void Keeper::clearBird() {
	list2->clear();
}

void Keeper::clearCat() {
	list3->clear();
}

void Keeper::importLists() {
	ifstream fin("t1.txt");
	list1->clear();
	list2->clear();
	list3->clear();
	string breed, color, feedType, feed, habitat, ownerName, nickname, str;
	while (getline(fin, str)) {
		if (str == "fish!") {
			getline(fin, str);
			int count = stoi(str);
			while (count > 0) {
				getline(fin, str);
				breed = str;
				getline(fin, str);
				color = str;
				getline(fin, str);
				feedType = str;
				Fish fish{ breed, color, feedType };
				list1->add(fish);
				count--;
			}
			continue;
		}
		if (str == "bird!") {
			getline(fin, str);
			int count = stoi(str);
			while (count > 0) {
				getline(fin, str);
				breed = str;
				getline(fin, str);
				color = str;
				getline(fin, str);
				feed = str;
				getline(fin, str);
				habitat = str;
				Bird bird{ breed, color, feed, habitat };
				list2->add(bird);
				count--;
			}
			continue;
		}
		if (str == "cat!") {
			getline(fin, str);
			int count = stoi(str);
			while (count > 0) {
				getline(fin, str);
				breed = str;
				getline(fin, str);
				color = str;
				getline(fin, str);
				ownerName = str;
				getline(fin, str);
				nickname = str;
				Cat cat{ breed, color, ownerName, nickname };
				list3->add(cat);
				count--;
			}
			continue;
		}
	}
	cout << "Import is done\n\n";
	fin.close();
}

void Keeper::exportLists() {
	ofstream fout("t2.txt");
	if (list1->getSize() > 0) {
		fout << "fish!" << "\n";
		fout << list1->getSize() << "\n";
		for (int i = 0; i < list1->getSize(); i++) {
			Fish fish = list1->get(i);
			fout << fish.getBreed() << "\n";
			fout << fish.getColor() << "\n";
			fout << fish.getFeedType() << "\n";
		}
	}
	if (list2->getSize() > 0) {
		fout << "bird!" << "\n";
		fout << list2->getSize() << "\n";
		for (int i = 0; i < list2->getSize(); i++) {
			Bird bird = list2->get(i);
			fout << bird.getBreed() << "\n";
			fout << bird.getColor() << "\n";
			fout << bird.getFeed() << "\n";
			fout << bird.getHabitat() << "\n";
		}
	}
	if (list3->getSize() > 0) {
		fout << "cat!" << "\n";
		fout << list3->getSize() << "\n";
		for (int i = 0; i < list3->getSize(); i++) {
			Cat cat = list3->get(i);
			fout << cat.getBreed() << "\n";
			fout << cat.getColor() << "\n";
			fout << cat.getOwnerName() << "\n";
			fout << cat.getNickname() << "\n";
		}
	}
	cout << "Export is done\n\n";
	fout.close();
}