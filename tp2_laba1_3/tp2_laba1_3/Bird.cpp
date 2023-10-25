#include "Bird.h"

Bird::Bird() {
	cout << "Bird null constructor." << endl;
}

Bird::Bird(string breed, string color, string feed, string habitat) {
	this->breed = breed;
	this->color = color;
	this->feed = feed;
	this->habitat = habitat;
	cout << "Bird constructor with parametrs." << endl;
}

Bird::~Bird() {
	cout << "Bird destructor." << endl;
}

void Bird::setFeed(string feed) {
	this->feed = feed;
}
string Bird::getFeed() {
	return feed;
}

void Bird::setHabitat(string habitat) {
	this->habitat = habitat;
}

string Bird::getHabitat() {
	return habitat;
}

bool Bird::operator == (const Bird& obj) {
	if (obj.breed != this->breed)
		return false;
	if (obj.color != this->color)
		return false;
	if (obj.feed != this->feed)
		return false;
	if (obj.habitat != this->habitat)
		return false;
	return true;
}

string Bird::showType() {
	return "Bird";
}

void Bird::save(string fileName) {
	ofstream fout(fileName, ios_base::app);
	fout << breed << "\n";
	fout << color << "\n";
	fout << feed << "\n";
	fout << habitat << "\n";
	fout.close();
}

void Bird::change() {
	int param;
	string value;
	while (true) {
		cout << "What do you want to change?\n1)Breed\n2)Color\n3)Feed\n4)Habitat\n5)Exit\n";
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
			this->feed = value;
			break;
		case 4:
			cout << "value is - ";
			cin >> value;
			cout << endl;
			this->habitat = value;
			break;
		case 5:
			return;
		default:
			cout << "Incorrect input\n";
		}
	}
}

void Bird::show() {
	cout << "Breed is " << breed << endl;
	cout << "Color is " << color << endl;
	cout << "FeedType is " << feed << endl;
	cout << "FeedType is " << habitat << endl;
	cout << endl;
}