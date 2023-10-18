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
template <typename T>
class List
{
	template <typename T>
	friend void operator == (const List& lis, T val);
public:
	List();
	explicit List(int siz);
	~List();
	List(const List& other);

	void add(T data);
	void insert(T data, int i);
	T remove(int index);
	T get(int i);
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
void operator == (const List<T>& lis, int val);

template <typename T>
List<T>::List()
{
	size = 0;
	head = nullptr;
}

template <typename T>
List<T>::List(int siz)
{
	size = 0;
	head = nullptr;
}

template <typename T>
List<T>::~List()
{
	clear();
	/*cout << "111" << endl;*/
}

template <typename T>
List<T>::List(const List<T>& other)
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




template <typename T>
void List<T>::add(T data)
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

template <typename T>
void List<T>::insert(T data, int index) {
	int counter = 0;
	Node<T>* current = this->head;
	if (index == size) {
		this->add(data);
		return;
	}
	while (current != nullptr)
	{
		if (counter == index)
		{
			Node<T>* prev = current->pPrev;
			Node<T>* newObj = new Node<T>(data, current, prev);

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

template <typename T>
T List<T>::get(int index) {
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

template <typename T>
T List<T>::remove(int index) {
	int counter = 0;
	Node<T>* current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			Node<T>* prev = current->pPrev;
			Node<T>* next = current->pNext;
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

template <typename T>
void List<T>::clear()
{
	Node<T>* temp;
	while (size > 0)
	{
		temp = head;

		head = head->pNext;


		delete temp;

		size--;
	}
}



template <typename T>
void List<T>::operator=(const List<T>& other)
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




template <typename T>
int List<T>::getSize()
{
	return size;
}

template <typename T>
int List<T>::request_strt()
{
	int strt;
	cout << "Input the list length: ";
	cin >> strt;
	return strt;
}

template <typename T>
void List<T>::Show()
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

template <typename T>
void operator==(const List<T>& list, T val)
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