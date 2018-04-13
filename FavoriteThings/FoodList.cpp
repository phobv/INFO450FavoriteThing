#include"stdafx.h"
#include"FoodList.h"
#include<iostream>
using namespace std;

FoodList::FoodList()
{
	listSize = 0;
}

int FoodList::addFoodItem()
{
	if (fList[listSize].getFoodItem() == 0)
	{
		listSize++;
		return 0;
	}
	else
	{
		cout << "error occured in addInventoryItem" << endl;
		return 0;
	}


}

void FoodList::printList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << fList[i];
		cout << endl << endl;


	}
}