#include"stdafx.h"
#include"FoodList.h"
#include<iostream>
using namespace std;


FoodList::FoodList()
{
	listSize = 0;
}

// checks if its a duplicate
bool FoodList::duplicate(FoodItem food)
{
	for (int i = 0; i < listSize; i++)
	{
		if (food.getRestaurantName() == fList[i].getRestaurantName())
		{
			cout << endl;
			cout << endl;
			cout << "A duplicate is detected..."<< endl;
			return false;
		}
	}
	return true;
}

// adds the favorite food to the list, if duplicate, drops it
int FoodList::addFoodItem()
{
	FoodItem newFood;
	newFood.getFoodItem();
	if (duplicate(newFood))
	{
		fList[listSize] = newFood;
		listSize++;
		return 0;
	}
	else
	{
		cout << "error occured item is a duplicate!" << endl;
		return 0;
	}


}
//prints the list 
void FoodList::printList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << fList[i];
		cout << endl << endl;


	}
}