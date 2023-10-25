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

void Cat::save(string fileName) {
	ofstream fout(fileName, ios_base::app);
	fout << breed << "\n";
	fout << color << "\n";
	fout << ownerName << "\n";
	fout << nickname << "\n";
	fout.close();
}

void Cat::change() {
	int param;
	string value;
	while (true) {
		cout << "What do you want to change?\n1)Breed\n2)Color\n3)OwnerName\n4)Nickname\n5)Exit\n";
		cin >> param;
		switch (param) {
		case 1:
			cout << "value is - ";
			cin >> value;
			cout << endl;
			this->breed = value;
			break;
		case 2:
			cout << "value is - ";
			cin >> value;
			cout << endl;
			this->color = value;
			break;
		case 3:
			cout << "value is - ";
			cin >> value;
			cout << endl;
			this->ownerName = value;
			break;
		case 4:
			cout << "value is - ";
			cin >> value;
			cout << endl;
			this->nickname = value;
			break;
		case 5:
			return;
		default:
			cout << "Incorrect input\n";
		}
	}
}

void Cat::show() {
	cout << "Breed is " << breed << endl;
	cout << "Color is " << color << endl;
	cout << "FeedType is " << ownerName << endl;
	cout << "FeedType is " << nickname << endl;
	cout << endl;
}