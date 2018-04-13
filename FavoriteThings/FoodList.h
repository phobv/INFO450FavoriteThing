#pragma once

#include "stdafx.h"
#include "FoodItem.h"

using namespace std;


class FoodList
{
private:
	FoodItem fList[1000];
	int listSize;
public:
	FoodList();
	int addFoodItem();
	void printList();


};