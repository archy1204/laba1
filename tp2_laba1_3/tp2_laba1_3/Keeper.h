#pragma once
#include "List.h"

using namespace std;

class Keeper {
private:
	List* list = nullptr;
	
public:
	Keeper();
	Keeper(List* list);
	~Keeper();

	List* getList();

	void addFish(Fish& data);
	void addFish(Fish& data, int i);

	void addBird(Bird& data);
	void addBird(Bird& data, int i);

	void addCat(Cat& data);
	void addCat(Cat& data, int i);

	Fish getFish(int i);
	Bird getBird(int i);
	Cat getCat(int i);

	void remove(int i);
	int size();
	void clear();
	void importList();
	void exportList();
};

Keeper::Keeper() {
	list = new List();
	cout << "Был вызван конструктор объекта класса Keeper." << endl;
}

Keeper::Keeper(List* list) {
	this->list = list;
	cout << "Был вызван конструктор копирования объекта класса Keeper." << endl;
}

Keeper::~Keeper() {
	clear();
	cout << "Был вызван деструктор объекта класса Keeper." << endl;
}

List* Keeper::getList() {
	return list;
}


//    add 1
void Keeper::addFish(Fish& data) {
	list->add(data);
}

void Keeper::addFish(Fish& data, int i) {
	list->insert(data, i);
}
//        2
void Keeper::addBird(Bird& data) {
	list->add(data);
}

void Keeper::addBird(Bird& data, int i) {
	list->insert(data, i);
}
//        3
void Keeper::addCat(Cat& data) {
	list->add(data);
}

void Keeper::addCat(Cat& data, int i) {
	list->insert(data, i);
}
//



//       get 1
Fish Keeper::getFish(int i) {
	return list->get(i);
}
//			 2
Bird Keeper::getBird(int i) {
	return list->get(i);
}
//			 3
Cat Keeper::getCat(int i) {
	return list->get(i);
}
//



void Keeper::remove(int i) {
	list->remove(i);
}

int Keeper::size() {
	list->getSize();
}

void Keeper::clear() {
	list->clear();
}

void Keeper::importList() {

}

void Keeper::exportList() {

}