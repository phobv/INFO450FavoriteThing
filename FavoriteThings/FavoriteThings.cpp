// FavoriteThings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"FoodItem.h"
#include"FoodList.h"
using namespace std;

int main()
{

		char answer;
//This displays the instructions of the program.
		cout << "This program will ask you to "; 
		cout << "input your favorite foods."<<endl;
		cout << endl;
		

		FoodList myList;
//This while loop asks if you want to add another food favorite
		do {
			myList.addFoodItem();
			cout << "Would you like to add another Food "; 
			cout<<"Favorite to your list?(Y or y for yes): ";
			cin >> answer;
			cout << endl;
			cin.clear();
			cin.ignore();
		} while (answer == 'y' || answer == 'Y');
		cout << endl;
//This prints the list created by the user.
		myList.printList();
		return 0;
	
	


	return 0;
}