#pragma once
#include "List.h"

using namespace std;

template <typename T>
class Keeper {
private:
	List<T>* list = nullptr;
	
public:
	Keeper();
	Keeper(List<T>* list);
	~Keeper();

	List<T>* getList();
	void addObject(T& data);
	void addObject(T& data, int i);
	T getObject(int i);
	void remove(int i);
	int size();
	void clear();
	void importList();
	void exportList();
};

template <typename T>
Keeper<T>::Keeper() {
	list = new List<T>();
	cout << "Был вызван конструктор объекта класса Keeper." << endl;
}

template <typename T>
Keeper<T>::Keeper(List<T>* list) {
	this->list = list;
	cout << "Был вызван конструктор копирования объекта класса Keeper." << endl;
}

template <typename T>
Keeper<T>::~Keeper() {
	clear();
	cout << "Был вызван деструктор объекта класса Keeper." << endl;
}

template <typename T>
List<T>* Keeper<T>::getList() {
	return list;
}

template <typename T>
void Keeper<T>::addObject(T& data) {
	list->add(data);
}

template <typename T>
void Keeper<T>::addObject(T& data, int i) {
	list->insert(data, i);
}

template <typename T>
T Keeper<T>::getObject(int i) {
	return list->get(i);
}

template <typename T>
void Keeper<T>::remove(int i) {
	list->remove(i);
}

template <typename T>
int Keeper<T>::size() {
	list->getSize();
}

template <typename T>
void Keeper<T>::clear() {
	list->clear();
}

template <typename T>
void Keeper<T>::importList() {

}

template <typename T>
void Keeper<T>::exportList() {

}