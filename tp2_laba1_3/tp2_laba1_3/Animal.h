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
	void setBreed(string breed);
	string getBreed();
	void setColor(string color);
	string getColor();
};