#pragma once
#include <iostream>
#include <string>
using namespace std;


class Node
{
public:
	Node* pNext;
	Node* pPrev;
	int data;
	Node(int data = int(), Node* pNext = nullptr, Node* pPrev = nullptr);

};

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
	Node* head;
	Node* tail;
};

void operator != (const List& lis, int val);
void operator == (const List& lis, int val);
