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

	friend ostream& operator << (ostream& stream, Bird& obj);
	friend istream& operator >> (istream& stream, Bird& obj);
	bool operator == (const Bird& obj);

	string showType();
	void setFeed(string feed);
	string getFeed();
	void setHabitat(string habitat);
	string getHabitat();
};