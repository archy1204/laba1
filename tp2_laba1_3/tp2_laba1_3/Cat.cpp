#include "Cat.h"

Cat::Cat() {
	cout << "Cat null constructor." << endl;
}

Cat::Cat(string breed, string color, string ownerName, string nickname) {
	this->breed = breed;
	this->color = color;
	this->ownerName = ownerName;
	this->nickname = nickname;
	cout << "Cat constructor with parametrs." << endl;
}

Cat::~Cat() {
	cout << "Cat destructor." << endl;
}

void Cat::setOwnerName(string ownerName) {
	this->ownerName = ownerName;
}
string Cat::getOwnerName() {
	return ownerName;
}

void Cat::setNickname(string nickname) {
	this->nickname = nickname;
}

string Cat::getNickname() {
	return nickname;
}

ostream& operator << (std::ostream& stream, Cat& obj) {
	stream << "Breed is " << obj.breed << endl;
	stream << "Color is " << obj.color << endl;
	stream << "FeedType is " << obj.ownerName << endl;
	stream << "FeedType is " << obj.nickname << endl;
	stream << endl;
	return stream;
}

istream& operator >> (std::istream& stream, Cat& obj) {
	stream >> obj.breed;
	stream >> obj.color;
	stream >> obj.ownerName;
	stream >> obj.nickname;
	return stream;
}

bool Cat::operator == (const Cat& obj) {
	if (obj.breed != this->breed)
		return false;
	if (obj.color != this->color)
		return false;
	if (obj.nickname != this->nickname)
		return false;
	if (obj.ownerName != this->ownerName)
		return false;
	return true;
}

string Cat::showType() {
	return "Cat";
}