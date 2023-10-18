#pragma once
#include "List.h"
#include <fstream>
#include<string>

using namespace std;

class Keeper {
private:
	List<Fish>* list1 = nullptr;
	List<Bird>* list2 = nullptr;
	List<Cat>* list3 = nullptr;
	
public:
	Keeper();
	Keeper(List<Fish>* list1, List<Bird>* list2, List<Cat>* list3);
	~Keeper();

	List<Fish>* getFishList();
	List<Bird>* getBirdList();
	List<Cat>* getCatList();

	void addFish(Fish& data);
	void addFish(Fish& data, int i);

	void addBird(Bird& data);
	void addBird(Bird& data, int i);

	void addCat(Cat& data);
	void addCat(Cat& data, int i);

	Fish getFish(int i);
	Bird getBird(int i);
	Cat getCat(int i);

	Fish removeFish(int i);
	Bird removeBird(int i);
	Cat removeCat(int i);

	void showFish();
	void showBird();
	void showCat();

	int sizeFish();
	int sizeBird();
	int sizeCat();

	void clearFish();
	void clearBird();
	void clearCat();

	void importLists();
	void exportLists();
};