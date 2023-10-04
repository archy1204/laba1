#include <list>
#include <iostream>
#define cles 1
using namespace std;

void menu();
void men();
void disp();
void cls();
void elad();
void elre();
void inc();
void imp();
void exp();


int main(void)
{
	menu();
	return 0;
}

void menu()
{
	int choice = 0;
	int k = 0;

	men();
	while (choice != 6)
	{
		cin >> choice;
		cls();
		switch (choice)
		{
		case 1: //////////////////////////////Open list menu
		{
			k = 0;
			disp();
			cout << "List\n";
			while (k != 3)
			{
				cin >> k;
				switch (k)
				{
				case 1:////Add element
					cls();
					disp();
					cout << "List\n";
					elad();
					break;
				case 2://///Remove element
					cls();
					disp();
					cout << "List\n";
					elre();
					break;
				case 3:///To main menu
					cls();
					men();
					break;
				default:
					cls();
					disp();
					cout << "List\n";
					inc();
					break;
				}
			}
			break;
		}
		case 2: //////////////////////////////Open deck menu
		{
			k = 0;
			disp();
			cout << "Deck\n";
			while (k != 3)
			{
				cin >> k;
				switch (k)
				{
				case 1:////Add element
					cls();
					disp();
					cout << "Deck\n";
					elad();
					break;
				case 2://///Remove element
					cls();
					disp();
					cout << "Deck\n";
					elre();
					break;
				case 3:///To main menu
					cls();
					men();
					break;
				default:
					cls();
					disp();
					cout << "Deck\n";
					inc();
					break;
				}
			}
			break;
		}
		case 3:
		{
			k = 0;
			disp();
			cout << "Stack\n";
			while (k != 3)
			{
				cin >> k;
				switch (k)
				{
				case 1:////Add element
					cls();
					disp();
					cout << "Stack\n";
					elad();
					break;
				case 2://///Remove element
					cls();
					disp();
					cout << "Stack\n";
					elre();
					break;
				case 3:///To main menu
					cls();
					men();
					break;
				default:
					cls();
					disp();
					cout << "Stack\n";
					inc();
					break;
				}
			}
			break;
		}
		case 4:
			cls();
			men();
			imp();
			break;
		case 5:
			cls();
			men();
			exp();
			break;
		case 6:
			cls();
			men();
			break;
		default:
			cls();
			men();
			inc();
			break;
		}
	}
}

void men()
{
	
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

void elad()
{
	cout << "Element added!\n";
}

void elre()
{
	cout << "Element removed!\n";
}

void inc()
{
	cout << "Incorrect input!\n" << endl;
}

void imp()
{
	cout << "File imported!\n" << endl;
}

void exp()
{
	cout << "File exported!\n" << endl;
}
