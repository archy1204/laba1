#pragma once
#include <string>
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"

using namespace std;

template <typename T>
class Node
{
public:
	Node<T>* pNext;
	Node<T>* pPrev;
	T data;
	Node(T data, Node<T>* pNext = nullptr, Node<T>* pPrev = nullptr);

};

class List
{
	template <typename T>
	friend void operator == (const List& lis, T val);
public:
	List();
	explicit List(int siz);
	~List();
	List(const List& other);
	
	void addFish(Fish data);
	void addBird(Bird data);
	void addCat(Cat data);

	void insertFish(Fish data, int i);
	void insertBird(Bird data, int i);
	void insertCat(Cat data, int i);

	Fish removeFish(int index);
	Bird removeBird(int index);
	Cat removeCat(int index);

	Fish getFish(int i);
	Bird getBird(int i);
	Cat getCat(int i);

	void clear();
	
	void operator = (const List& other);
	
	
	int getSize();
	int request_strt();
	void Spawn(int siz);
	void Show();
private:
	int size;
	Node<T>* head;
	Node<T>* tail;
};
template <typename T>
void operator != (const List& lis, int val);
template <typename T>
void operator == (const List& lis, int val);

List::List()
{
	size = 0;
	head = nullptr;
}

List::List(int siz)
{
	size = 0;
	head = nullptr;
}

List::~List()
{
	clear();
	/*cout << "111" << endl;*/
}

List::List(const List& other)
{
	int cnt = 0;
	this->size = other.size;

	Node<T>* current = nullptr;
	Node<T>* current1 = nullptr;
	this->head = current;


	for (cnt = 0; cnt < this->size; cnt++)
	{
		if (head == nullptr)
		{
			this->head = new Node<T>(other.head->data);
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
			current1->pNext = new Node<T>(current->pNext->data, current1->pNext, current1);
			this->tail = current1->pNext;
		}
	}
}




void List::add(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
		tail = this->head;
	}
	else
	{
		Node<T>* current = this->head;

		while (current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data, current->pNext, current);
		tail = current->pNext;
	}
	size++;
}

void List::insert(T data, int index) {
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			Node<T>* prev = current->pPrev;
			Node<T>* newObj = new Node<T>(data, current, prev);

			prev->pNext = newObj;
			current->pPrev = newObj;
			break;
		}
		current = current->pNext;
		counter++;
	}
	size++;

}

T List::get(int index) {
	int counter = 0;
	Node<T>* current = this->head;
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

T List::remove(int index) {
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			Node<T>* prev = current->pPrev;
			Node<T>* next = current->pNext;
			prev->pNext = next;
			next->pPrev = prev;
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
	size--;
}

void List::clear()
{
	Node<T>* temp = head;
	while (size)
	{
		head = head->pNext;

		delete temp;

		size--;
	}
}



void List::operator=(const List& other)
{
	int cnt = 0;
	this->size = other.size;

	Node<T>* current = nullptr;
	Node<T>* current1 = nullptr;
	this->head = current;


	for (cnt = 0; cnt < this->size; cnt++)
	{
		if (head == nullptr)
		{
			this->head = new Node<T>(other.head->data);
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
			current1->pNext = new Node<T>(current->pNext->data, current1->pNext, current1);
			this->tail = current1->pNext;
		}
	}
}




int List::getSize()
{
	return size;
}

int List::request_strt()
{
	int strt;
	cout << "Input the list length: ";
	cin >> strt;
	return strt;
}

void List::Show()
{
	Node<T>* current = this->head;
	if (current != nullptr)
	{
		while (current->pNext != nullptr)
		{
			cout << current->data;;
			current = current->pNext;
		}
		cout << current->data << endl;
	}
	else
		cout << "The list is empty!!!" << endl;
}

template <typename T>
Node<T>::Node(T data, Node<T>* pNext, Node<T>* pPrev)
{
	this->data = data;
	this->pNext = pNext;
	this->pPrev = pPrev;
}

void operator==(const List& list, T val)
{
	bool comp2 = false;

	for (int cnt = 0; cnt < list.size; cnt++)
	{
		Node<T>* current = list.head;

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