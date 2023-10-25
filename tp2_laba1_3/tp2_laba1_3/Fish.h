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

	bool operator == (const Fish& obj);

	virtual void save(string fileName);
	virtual void change();
	virtual void show();
	virtual string showType();
	void setFeedType(string feedType);
	string getFeedType();

};