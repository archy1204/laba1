#include "Fish.h"

Fish::Fish() {
	cout << "Был вызван конструктор без параметров объекта класса Fish." << endl;
}

Fish::Fish(string breed, string color, string feedType) {
	this->breed = breed;
	this->color = color;
	this->feedType = feedType;
	cout << "Был вызван конструктор с параметрами объекта класса Fish." << endl;
}

Fish::~Fish() {
	cout << "Был вызван деструктор объекта класса Fish." << endl;
}

void Fish::setFeedType(string feedType) {
	this->feedType = feedType;
}
string Fish::getFeedType() {
	return feedType;
}
