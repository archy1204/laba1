#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Animal {
protected:
	string breed;
	string color;
public:
	Animal();
	Animal(string breed, string color);
	~Animal(); 

	bool operator == (const Animal& obj);

	virtual void save(string fileName) = 0;
	virtual void change() = 0;
	virtual void show() = 0;
	virtual string showType() = 0;
	void setBreed(string breed);
	string getBreed();
	void setColor(string color);
	string getColor();
};