#include "Cat.h"

Cat::Cat() {
	cout << "��� ������ ����������� ��� ���������� ������� ������ Cat." << endl;
}

Cat::Cat(string breed, string color, string ownerName, string nickname) {
	this->breed = breed;
	this->color = color;
	this->ownerName = ownerName;
	this->nickname = nickname;
	cout << "��� ������ ����������� � ����������� ������� ������ Cat." << endl;
}

Cat::~Cat() {
	cout << "��� ������ ���������� ������� ������ Cat." << endl;
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