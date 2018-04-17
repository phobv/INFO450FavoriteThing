#pragma once

#include "stdafx.h"
#include "FoodItem.h"

using namespace std;


class FoodList
{
private:
	FoodItem fList[100];
	int listSize;
public:
//created a constructor for FoodList
	FoodList();
//created function that adds item to the list
	int addFoodItem();
// verifies if its a duplicate or not
	bool duplicate(FoodItem food);
//prints the list
	void printList();


};