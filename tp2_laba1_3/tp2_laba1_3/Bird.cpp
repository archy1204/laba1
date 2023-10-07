#include "Bird.h"

Bird::Bird() {
	cout << "��� ������ ����������� ��� ���������� ������� ������ Bird." << endl;
}

Bird::Bird(string breed, string color, string feed, string habitat) {
	this->breed = breed;
	this->color = color;
	this->feed = feed;
	this->habitat = habitat;
	cout << "��� ������ ����������� � ����������� ������� ������ Bird." << endl;
}

Bird::~Bird() {
	cout << "��� ������ ���������� ������� ������ Bird." << endl;
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