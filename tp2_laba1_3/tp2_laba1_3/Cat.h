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
	void setOwnerName(string ownerName);
	string getOwnerName();
	void setNickname(string nickname);
	string getNickname();
};