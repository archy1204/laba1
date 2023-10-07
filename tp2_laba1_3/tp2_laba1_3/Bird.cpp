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