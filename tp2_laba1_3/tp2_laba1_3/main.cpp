#pragma once
#include "Keeper.h"
#include <iostream>
#define cles 1

using namespace std;

void options();
void menu();
void disp();
void cls();

Keeper<Animal>* keeper = new Keeper<Animal>();

int main(void) {                       //   1. Реализовать меню						2. Узнать про работу с файлами и реализовать
	menu();								//   3. Узнать про абстрактность класса			4. Узнать про динамическое выделение памяти
	return 0;
}

void menu() {
	int choice = 0;
	int k = 0;
	options();
	cin >> choice;
	switch (choice) {
	case 1: {
		cout << "What object do you want to create?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		switch (choice) {
		case 1: {
			string bread, color, feedType;
			cout << "Enter the breed, the color and the type of feed.";
			cin >> bread >> color >> feedType;
			Fish fish{ bread, color, feedType };
			keeper->addObject(fish);
		}
			  break;
		}
	}
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		cout << "";

	}
	Animal animal = keeper->getObject(0);
	//cout << animal.getBreed();
	cout<< animal.showType();
	Animal* an{ &animal };
	//Fish fis = static_cast<Fish>(an);
}


void disp()
{
	cout << "(1)Add element\n(2)Remove element\n(3)Exit" << endl << endl;
}

void cls()
{
	if (cles)
		system("cls");
}

void options() {
	cout << "Menu\n";
	cout << "1) Add new object.\n";
	cout << "2) Get object.\n";
	cout << "3) Remove object fron list.\n";
	cout << "4) Size of the list.\n";
	cout << "5) Clear the list.\n";
	cout << "6) Import list from file.\n";
	cout << "7) Export list to file.\n";
}
