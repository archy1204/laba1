#pragma once
#include <iostream>
#include <string>
#include "Animal.h";

using namespace std;

class Fish : public Animal {
private:
	string feedType;
public:
	Fish();
	Fish(string breed, string color, string feedType);
	~Fish();

	friend ostream& operator << (ostream& stream, Fish& obj);
	friend istream& operator >> (istream& stream, Fish& obj);
	bool operator == (const Fish& obj);

	string showType();
	void setFeedType(string feedType);
	string getFeedType();

};