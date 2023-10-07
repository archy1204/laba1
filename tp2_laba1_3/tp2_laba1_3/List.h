#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node
{
public:
	Node* pNext;
	Node* pPrev;
	T data;
	Node(int data = int(), Node* pNext = nullptr, Node* pPrev = nullptr);

};
template <class T>
class List
{
	friend void operator != (const List& lis, int val);
	friend void operator == (const List& lis, int val);
public:
	List();
	explicit List(int siz);
	~List();
	List(const List& other);
	void part_show(int a, int b);
	void pop_front();
	void push_back(int data);
	void insert(T data, int i);
	T remove(int index);
	void get(int i);
	void clear();
	void operator < (int val);
	void operator > (int val);
	void operator = (const List& other);
	void operator () (int val1, int val2);
	bool comp(int cnt, int val);
	bool comp1(int cnt, int val);
	bool comp2(int cnt, int val);
	int GetSize();
	int request_strt();
	void Spawn();
	void Spawn(int siz);
	int& operator[](const int index);
	void Show();



private:


	int Size;
	Node<T>* head;
	Node<T>* tail;
};
template <typename T>
void operator != (const List<T>& lis, int val);
template <typename T>
void operator == (const List<T>& lis, int val);

template <class T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template <class T>
List<T>::List(int siz)
{
	Size = 0;
	head = nullptr;
	Spawn(siz);
}

template <class T>
List<T>::~List()
{
	clear();
	/*cout << "111" << endl;*/
}

template <class T>
List<T>::List(const List& other)
{
	int cnt = 0;
	this->Size = other.Size;

	Node* current = nullptr;
	Node* current1 = nullptr;
	this->head = current;


	for (cnt = 0; cnt < this->Size; cnt++)
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

template <class T>
void List<T>::part_show(int a, int b)
{
	Node* current = this->head;
	int tems = this->Size;
	if ((a < 0) || (b > Size) || (a > b))
	{
		cout << "Wrong" << endl;
	}
	else
	{
		for (int i = 0; i < Size; i++)
		{
			current = current->pNext;
			if (i < a)
			{
				pop_front();
				Size++;
			}
			else if (i == b - 1)
			{
				this->tail = current;
			}
			else if (i == Size - 1)
			{
				delete current;
			}
			else if ((i > b))
			{
				delete current->pPrev;
			}

		}
		tail->pNext = nullptr;
	}
	Show();
	this->Size = b - a + 1;
}

template <class T>
void List<T>::pop_front()
{
	Node* temp = head;
	head = head->pNext;

	delete temp;

	Size--;
}

template <class T>
void List<T>::push_back(int data)
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
	Size++;
}

template<class T>
void List<T>::insert(T data, int index) {
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

}

template<class T>
void List<T>::get(int index) {
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

template<class T>
T List<T>::remove(int index) {
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
}

template <class T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}

template <class T>
void List<T>::operator<(int val)
{
	for (int cnt = 0; cnt < this->Size; cnt++)
	{
		if (comp(cnt, val))
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

template <class T>
void List<T>::operator>(int val)
{
	for (int cnt = 0; cnt < this->Size; cnt++)
	{
		if ((comp1(cnt, val)))
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

template <class T>
void List<T>::operator=(const List& other)
{
	int cnt = 0;
	this->Size = other.Size;

	Node* current = nullptr;
	Node* current1 = nullptr;
	this->head = current;


	for (cnt = 0; cnt < this->Size; cnt++)
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

template <class T>
void List<T>::operator()(int val1, int val2)
{
	part_show(val1, val2);
}

template <class T>
bool List<T>::comp(int cnt, int val)
{
	Node* current = this->head;

	for (int cnt1 = 0; cnt1 != cnt; cnt1++)
	{
		current = current->pNext;
	}
	if (current->data < val)
	{
		return true;
	}

	return false;
}

template <class T>
bool List<T>::comp1(int cnt, int val)
{
	Node* current = this->head;

	for (int cnt1 = 0; cnt1 != cnt; cnt1++)
	{
		current = current->pNext;
	}
	if (current->data > val)
	{
		return true;
	}

	return false;
}


template <class T>
int List<T>::GetSize()
{
	return Size;
}

template <class T>
int List<T>::request_strt()
{
	int strt;
	cout << "Input the list length: ";
	cin >> strt;
	return strt;
}

template <class T>
void List<T>::Spawn()
{
	int strt = request_strt();
	for (int i = 0; i < strt; i++)
	{
		push_back(rand() % 10);
	}
}

template <class T>
void List<T>::Spawn(int siz)
{
	int strt = siz;
	for (int i = 0; i < strt; i++)
	{
		push_back(rand() % 10);
	}
}

template <class T>
int& List<T>::operator[](const int index)
{
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

template <class T>
void List<T>::Show()
{
	Node* current = this->head;
	if (current != nullptr)
	{
		while (current->pNext != nullptr)
		{
			cout << current->data << " ";
			current = current->pNext;
		}
		cout << current->data << " " << endl;
	}
	else
		cout << "The list is empty!!!" << endl;
}

template <class T>
Node<T>::Node(int data, Node<T>* pNext, Node<T>* pPrev)
{
	this->data = data;
	this->pNext = pNext;
	this->pPrev = pPrev;
}

template <class T>
void operator!=(const List<T>& lis, int val)
{
	bool comp2 = false;

	for (int cnt = 0; cnt < lis.Size; cnt++)
	{
		Node* current = lis.head;

		for (int cnt1 = 0; cnt1 != cnt; cnt1++)
		{
			current = current->pNext;
		}
		if (current->data != val)
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

template <class T>
void operator==(const List<T>& lis, int val)
{
	bool comp2 = false;

	for (int cnt = 0; cnt < lis.Size; cnt++)
	{
		Node* current = lis.head;

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