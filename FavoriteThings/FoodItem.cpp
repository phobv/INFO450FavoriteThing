#include "stdafx.h"
#include "FoodItem.h"


FoodItem::FoodItem()
{
	restaurantName = "";
	foodName = "";
	foodType = "";
	cost = 0;
	rating = 0;
}

int FoodItem::getFoodItem()
{
	cout << "What is the name of the restaurant? ";
	getline(cin, restaurantName);
	cout << "What is the name of the Food? ";
	getline(cin, foodName);
	cout << "What type of food is it (Meal or Dessert)? ";
	getline(cin, foodType);
	cout << "How much does it cost? ";
	cin >> cost;
	cout << "On a scale from 1 to 5,";
	cout<< "with 5 being the best, how good is it ? ";
	cin >> rating;

	cin.clear();
	cin.ignore();

	return 0;
}

ostream & operator<<(ostream &os, const FoodItem &item)
{
	os << "**** ITEM ****" << endl;
	os << "Restaurant Name: " << item.restaurantName << endl;
	os << "Food Name: " << item.foodName << endl;
	os << "Food Type: " << item.foodType << endl;
	os << "Cost: " << item.cost << endl;
	os << "Food Rating: " << item.rating << endl;

	return os;
}