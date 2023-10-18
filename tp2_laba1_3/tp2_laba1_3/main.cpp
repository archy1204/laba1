#pragma once
#include "Keeper.h"
#include <iostream>
#define cles 1

using namespace std;

void options();
void menu();
void cls();

Keeper* keeper = new Keeper();

int main(void) {                       //   1. Реализовать меню						2. Узнать про работу с файлами и реализовать
	menu();								//   3. Узнать про абстрактность класса			4. Узнать про динамическое выделение памяти
	return 0;
}

void menu() {
	int choice = 0;
	int k = 0;
	string str;
	options();
	cin >> choice;
	cout << endl;
	switch (choice) {
	case 1: {
		cout << "What object do you want to create?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1: {
			string bread, color, feedType;
			cout << "Enter the breed, the color and the type of feed.\n";
			cin >> bread >> color >> feedType;
			Fish fish{ bread, color, feedType };
			keeper->addFish(fish);
			break;
		}
		case 2: {

			string breed, color, feed, habitat;
			cout << "Enter the breed, the color, feed and habitat\n";
			cin >> breed >> color >> feed >> habitat;
			Bird bird{ breed,  color,  feed,  habitat };
			keeper->addBird(bird);
			break;
		}
		case 3: {
			string breed, color, ownerName, nickname;
			cout << "Enter the breed, the color, ownerName and nickname\n";
			cin >> breed >> color >> ownerName >> nickname;
			Cat cat{ breed,  color,  ownerName,  nickname };
			keeper->addCat(cat);
			break;
		}
		default:
			cout << "Incorrect input";
		}
		break;
	}
	case 2: {
		cout << "What object do you want to create?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1: {
			string bread, color, feedType;
			cout << "Enter the breed, the color and the type of feed.\n";
			cin >> bread >> color >> feedType;
			Fish fish{ bread, color, feedType };
			cout << "Enter the number in list\n";
			cin >> k;
			cout << endl;
			if (k == keeper->sizeFish())
				keeper->addFish(fish);
			else
				keeper->addFish(fish, k);
			break;
		}
		case 2: {
			string breed, color, feed, habitat;
			cout << "Enter the breed, the color, feed and habitat\n";
			cin >> breed >> color >> feed >> habitat;
			Bird bird{ breed,  color,  feed,  habitat };
			cout << "Enter the number in list\n";
			cin >> k;
			cout << endl;
			if (k == keeper->sizeBird())
				keeper->addBird(bird);
			else
				keeper->addBird(bird, k);
			break;
		}
		case 3: {
			string breed, color, ownerName, nickname;
			cout << "Enter the breed, the color, ownerName and nickname\n";
			cin >> breed >> color >> ownerName >> nickname;
			Cat cat{ breed,  color,  ownerName,  nickname };
			cout << "Enter the number in list\n";
			cin >> k;
			cout << endl;
			if (k == keeper->sizeCat())
				keeper->addCat(cat);
			else
				keeper->addCat(cat, k);
			break;
		}
		default:
			cout << "Incorrect input";
		}
	}
		  break;
	case 3: {
		cout << "What object do you want to get?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1: {
			int number;
			cout << "What is the number of the fish in the list?\n";
			cin >> number;
			cout << endl;
			try {
				Fish fish = keeper->getFish(number);
				cout << fish;

			}
			catch (...) {
				cout << "Number is out of size\n";
			}
			break;
		}
		case 2: {
			int number;
			cout << "What is the number of the bird in the list?\n";
			cin >> number;
			cout << endl;
			try {
				Bird bird = keeper->getBird(number);
				cout << bird;
			} catch (...) {
				cout << "Number is out of size\n";
			}
			break;
		}
		case 3: {
			int number;
			cout << "What is the number of the cat in the list?\n";
			cin >> number;
			cout << endl;
			try {
				Cat cat = keeper->getCat(number);
				cout << cat;
			} catch (...) {
				cout << "Number is out of size\n";
			}
			break;
		}
		default:
			cout << "Incorrect input";
		}
	}
		break;
	case 4: {
		cout << "What object do you want to remove?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1: {
			int number;
			cout << "What is the number of the fish in the list?\n";
			cin >> number;
			cout << endl;
			try {
				if (number >= keeper->sizeFish())
					throw;
				Fish fish = keeper->removeFish(number);
				cout << fish;
			}
			catch (...) {
				cout << "rgte\n";
			}
			break;
		}
		case 2: {
			int number;
			cout << "What is the number of the bird in the list?\n";
			cin >> number;
			cout << endl;
			Bird bird = keeper->removeBird(number);
			cout << bird;
			break;
		}
		case 3: {
			int number;
			cout << "What is the number of the cat in the list?\n";
			cin >> number;
			Cat cat = keeper->removeCat(number);
			cout << cat;
			cout << endl;
			break;
		}
		default:
			cout << "Incorrect input";
		}
	}
		break;
	case 5: {
		cout << "What object do you want to change?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1: {
			int number;
			cout << "What is the number of the fish in the list?\n";
			cin >> number;
			cout << endl;
			Fish fish = keeper->removeFish(number);
			while (true) {
				cout << "What do you want to change?\n1)Breed\n2)Color\n3)FeedType\n4)Exit\n";
				cin >> str;
				cout << endl;
				if (str == "1") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					fish.setBreed(str);
				}
				if (str == "2") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					fish.setColor(str);
				}
				if (str == "3") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					fish.setFeedType(str);
				}
				if (str == "4") {
					break;
				}
			}
			keeper->addFish(fish, number);
			break;
		}
		case 2: {
			int number;
			cout << "What is the number of the bird in the list?\n";
			cin >> number;
			cout << endl;
			Bird bird = keeper->removeBird(number);
			while (true) {
				cout << "What do you want to change?\n1)Breed\n2)Color\n3)Feed4)Habitat\n5)Exit\n";
				cin >> str;
				cout << endl;
				if (str == "1") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					bird.setBreed(str);
					cout << endl;
				}
				if (str == "2") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					bird.setColor(str);
					cout << endl;
				}
				if (str == "3") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					bird.setFeed(str);
					cout << endl;
				}
				if (str == "4") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					bird.setHabitat(str);
					cout << endl;
				}
				if (str == "5") {
					break;
				}
			}
			keeper->addBird(bird, number);
			break;
		}
		case 3: {
			int number;
			cout << "What is the number of the Cat in the list?\n";
			cin >> number;
			Cat cat = keeper->removeCat(number);
			while (true) {
				cout << "What do you want to change?\n1)Breed\n2)Color\n3)OwnerName\n4)Nickname\n5)Exit\n";
				cin >> str;
				cout << endl;
				if (str == "1") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					cat.setBreed(str);
				}
				if (str == "2") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					cat.setColor(str);
				}
				if (str == "3") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					cat.setOwnerName(str);
				}
				if (str == "4") {
					cout << "value is - \n";
					cin >> str;
					cout << endl;
					cat.setNickname(str);
				}
				if (str == "5") {
					break;
				}
			}
			keeper->addCat(cat, number);
			break;
		}
		default:
			cout << "Incorrect input";
		}
	}
		break;
	case 6: {
		cout << "Which list do you want to show?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1: {
			keeper->showFish();
			break;
		}
		case 2: {
			keeper->showBird();
			break;
		}
		case 3: {
			keeper->showCat();
			break;
		}
		default:
			cout << "Incorrect input";
		}
	}
	break;
	case 7: {
		cout << "Size of which list do you want to know?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1: {
			cout << keeper->sizeFish();
			cout << endl;
			break;
		}
		case 2: {
			cout << keeper->sizeBird();
			cout << endl;
			break;
		}
		case 3: {
			cout << keeper->sizeCat();
			cout << endl;
			break;
		}
		default:
			cout << "Incorrect input";
		}
	}
		break;
	case 8: {
		cout << "Which list do you want to clear?\n";
		cout << "Fish.\n";
		cout << "Bird.\n";
		cout << "Cat.\n";
		cin >> choice;
		cout << endl;
		switch (choice) {
		case 1: {
			keeper->clearFish();
			keeper->showFish();
			break;
		}
		case 2: {
			keeper->clearBird();
			keeper->showBird();
			break;
		}
		case 3: {
			keeper->clearCat();
			keeper->showCat();
			break;
		}
		default:
			cout << "Incorrect input";
		}
	}
		break;
	case 9:
		try {
			keeper->importLists();
		}
		catch (...) {
			cout << "Reading from file failed\n";
		}
		break;
	case 10:
		try {
			keeper->exportLists();
		}
		catch (...) {
			cout << "Writing to file failed\n";
		}
		break;
	case 11:
		exit(0);
	default:
		cout << "Incorrect input\n";

	}
	menu();
}

void cls()
{
	if (cles)
		system("cls");
}

void options() {
	cout << "\nMenu\n";
	cout << "1) Add new object.\n";
	cout << "2) Insert new object.\n";
	cout << "3) Get object.\n";
	cout << "4) Remove object from list.\n";
	cout << "5) Change the object\n";
	cout << "6) Show the list\n";
	cout << "7) Size of the list.\n";
	cout << "8) Clear the list.\n";
	cout << "9) Import list from file.\n";
	cout << "10) Export list to file.\n";
	cout << "11) exit\n";
}
