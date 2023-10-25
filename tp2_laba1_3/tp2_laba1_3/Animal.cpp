#include"Animal.h";

Animal::Animal() {
	cout << "Animal null constructor.\n";
}

Animal::Animal(string breed, string color) {
	this->breed = breed;
	this->color = color;
	cout << "Animal constructor with parametrs." << endl;
}

Animal::~Animal() {
	cout << "Animal destructor." << endl;
} 

void Animal::setBreed(string breed) {
	this->breed = breed;
}

string Animal::getBreed() {
	return breed;
}

void Animal::setColor(string color) {
	this->color = color;
}

string Animal::getColor() {
	return color;
}