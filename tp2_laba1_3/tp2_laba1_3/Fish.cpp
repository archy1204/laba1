#include "Fish.h"

Fish::Fish() {
	cout << "��� ������ ����������� ��� ���������� ������� ������ Fish." << endl;
}

Fish::Fish(string breed, string color, string feedType) {
	this->breed = breed;
	this->color = color;
	this->feedType = feedType;
	cout << "��� ������ ����������� � ����������� ������� ������ Fish." << endl;
}

Fish::~Fish() {
	cout << "��� ������ ���������� ������� ������ Fish." << endl;
}

void Fish::setFeedType(string feedType) {
	this->feedType = feedType;
}
string Fish::getFeedType() {
	return feedType;
}
