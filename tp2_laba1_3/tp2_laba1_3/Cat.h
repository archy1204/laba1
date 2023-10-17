#pragma once
#include <iostream>
#include <string>
#include "Animal.h";

using namespace std;

class Cat : public Animal {
private:
	string ownerName;
	string nickname;
public:
	Cat();
	Cat(string breed, string color, string ownerName, string nickname);
	~Cat();

	friend ostream& operator << (ostream& stream, Cat& obj);
	friend istream& operator >> (istream& stream, Cat& obj);
	bool operator == (const Cat& obj);

	string showType();
	void setOwnerName(string ownerName);
	string getOwnerName();
	void setNickname(string nickname);
	string getNickname();
};