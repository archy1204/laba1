#pragma once
#include <string>
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"

using namespace std;

class Node
{
public:
	Node*pNext;
	Node* pPrev;
	Animal* data;
	Node(Animal* data, Node* pNext = nullptr, Node* pPrev = nullptr);

};
class Keeper
{
	friend void operator == (const Keeper& lis, Animal* val);
public:
	Keeper();
	explicit Keeper(int siz);
	~Keeper();
	Keeper(const Keeper& other);

	void add(Animal* data);
	void insert(Animal* data, int i);
	Animal* remove(int index);
	Animal* get(int i);
	void clear();
	void importList();
	void exportList();

	void operator = (const Keeper& other);


	int getSize();
	void show();
private:
	int size;
	Node* head;
	Node* tail;
};

void operator == (const Keeper& lis, int val);