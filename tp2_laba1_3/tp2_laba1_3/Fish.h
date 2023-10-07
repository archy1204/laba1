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
	void setFeedType(string feedType);
	string getFeedType();
};