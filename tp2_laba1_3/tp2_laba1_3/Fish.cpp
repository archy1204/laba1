#include "Fish.h"

Fish::Fish() {
	cout << "Fish null constructor." << endl;
}

Fish::Fish(string breed, string color, string feedType) {
	this->breed = breed;
	this->color = color;
	this->feedType = feedType;
	cout << "Fish constructor with parametrs." << endl;
}

Fish::~Fish() {
	cout << "Fish destructor." << endl;
}

void Fish::setFeedType(string feedType) {
	this->feedType = feedType;
}
string Fish::getFeedType() {
	return feedType;
}

bool Fish::operator == (const Fish& obj) {
	if (obj.breed != this->breed)
		return false;
	if (obj.color != this->color)
		return false;
	if (obj.feedType != this->feedType)
		return false;
	return true;
}

string Fish::showType() {
	return "Fish";
 }

void Fish::save(string fileName) {
	ofstream fout(fileName, ios_base::app);
	fout << "fish!" << "\n";
	fout << breed << "\n";
	fout << color << "\n";
	fout << feedType << "\n";
	fout.close();
}

void Fish::change() {
	int param;
	string value;
	while (true) {
		cout << "What do you want to change?\n1)Breed\n2)Color\n3)FeedType\n4)Exit\n";
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
			this->feedType = value;
			break;
		case 4:
			return;
		default:
			cout << "Incorrect input\n";
		}
	}
}

void Fish::show() {
	cout << "Breed is " << breed << endl;
	cout << "Color is " << color << endl;
	cout << "FeedType is " << feedType << endl;
	cout << endl;
}
