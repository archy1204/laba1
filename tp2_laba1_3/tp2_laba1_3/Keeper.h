#include<iostream>
#include"List.h"

using namespace std;

template <class T>
class Keeper {
private:
	const List<T>* list;
	
public:
	Keeper() {
		List<T>* list; = new List<T>();
		cout << "Был вызван конструктор объекта класса Keeper." << endl;
	}

	Keeper(List<T>* list) {
		this->list = list;
		cout << "Был вызван конструктор копирования объекта класса Keeper." << endl;
	}

	~Keeper(List<T>* list) {
		clear();
		cout << "Был вызван деструктор объекта класса Keeper." << endl;
	}

	List<T>* getList() {
		return list;
	}

	void addObject(int i) {
		list->insert(i);
	}

	T getObject(i) {
		list->get(i);
	}

	void remove(i) {
		list->remove(i);
	}

	int size() {
		list->Size();
	}

	void clear() {
		list->clear();
	}

	void importList() {

	}

	void exportList() {

	}
};