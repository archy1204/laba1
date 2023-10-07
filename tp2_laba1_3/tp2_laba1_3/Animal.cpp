#include"Animal.h";

/*Animal::Animal() {

}

Animal::Animal(string breed, string color) {
	this->breed = breed;
	this->color = color;
}

Animal::~Animal() {
	cout << "Был вызван деструктор объекта класса Animal." << endl;
} */

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