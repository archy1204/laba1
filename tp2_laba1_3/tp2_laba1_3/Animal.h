#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string breed;
	string color;
public:
	/* Animal();
	Animal(string breed, string color);
	~Animal(); */

	friend ostream& operator << (ostream& stream, Animal& obj);
	friend istream& operator >> (istream& stream, Animal& obj);
	//friend virtual ostream& operator << (ostream& stream, Fish& obj);
	//friend virtual istream& operator >> (istream& stream, Fish& obj);
	bool operator == (const Animal& obj);

	virtual string showType();
	void setBreed(string breed);
	string getBreed();
	void setColor(string color);
	string getColor();
};