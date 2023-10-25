#pragma once
#include <iostream>
#include <string>
#include "Animal.h";

using namespace std;

class Bird : public Animal {
private:
	string feed;
	string habitat;
public:
	Bird();
	Bird(string breed, string color, string feed, string habitat);
	~Bird();

	bool operator == (const Bird& obj);

	virtual void save(string fileName);
	virtual void change();
	virtual void show();
	virtual string showType();
	void setFeed(string feed);
	string getFeed();
	void setHabitat(string habitat);
	string getHabitat();
};