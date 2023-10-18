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

ostream& operator << (std::ostream& stream, Fish& obj) {
	stream << "Breed is "<< obj.breed<<endl;
	stream << "Color is " << obj.color << endl;
	stream << "FeedType is " << obj.feedType << endl;
	stream << endl;
	return stream;
}

istream& operator >> (std::istream& stream, Fish& obj) {
	stream >> obj.breed;
	stream >> obj.color;
	stream >> obj.feedType;
	return stream;
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
