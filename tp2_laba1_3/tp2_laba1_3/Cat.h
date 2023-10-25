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

	bool operator == (const Cat& obj);

	virtual void save(string fileName);
	virtual void change();
	virtual void show();
	virtual string showType();
	void setOwnerName(string ownerName);
	string getOwnerName();
	void setNickname(string nickname);
	string getNickname();
};