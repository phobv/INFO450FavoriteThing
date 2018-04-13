#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


class FoodItem
{
private:
	string restaurantName;
	string foodName;
	string foodType;
	double cost;
	double rating;

public:
	FoodItem();
	int getFoodItem();

	friend ostream & operator<<(ostream &os, const FoodItem &item);

};