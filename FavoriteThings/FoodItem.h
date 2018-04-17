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
	string getRestaurantName();
	string getFoodName();
	int getFoodItem();
//This displays favorite item to the console
	friend ostream & operator<<(ostream &os, const FoodItem &item);

};