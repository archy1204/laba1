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
		cout << "��� ������ ����������� ������� ������ Keeper." << endl;
	}

	Keeper(List<T>* list) {
		this->list = list;
		cout << "��� ������ ����������� ����������� ������� ������ Keeper." << endl;
	}

	~Keeper(List<T>* list) {
		clear();
		cout << "��� ������ ���������� ������� ������ Keeper." << endl;
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