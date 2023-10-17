#include "Bird.h"

Bird::Bird() {
	cout << "Был вызван конструктор без параметров объекта класса Bird." << endl;
}

Bird::Bird(string breed, string color, string feed, string habitat) {
	this->breed = breed;
	this->color = color;
	this->feed = feed;
	this->habitat = habitat;
	cout << "Был вызван конструктор с параметрами объекта класса Bird." << endl;
}

Bird::~Bird() {
	cout << "Был вызван деструктор объекта класса Bird." << endl;
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

ostream& operator << (std::ostream& stream, Bird& obj) {
	stream << "Breed is " << obj.breed << endl;
	stream << "Color is " << obj.color << endl;
	stream << "FeedType is " << obj.feed << endl;
	stream << "FeedType is " << obj.habitat << endl;
	stream << endl;
	return stream;
}

istream& operator >> (std::istream& stream, Bird& obj) {
	stream >> obj.breed;
	stream >> obj.color;
	stream >> obj.feed;
	stream >> obj.habitat;
	return stream;
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