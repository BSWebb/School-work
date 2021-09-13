//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Author: Brandon Webb
// Date: 9-11-21
// Desc: Homework #1 Project 1 of 2
// //This program displays the fewest bills needed to make the customers entered amount.
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>

int main()
{
	int result;
	int bills;
	
	//creates input for user to enter dollar amount
	std::cout << "Enter a Dollar Amount:";
	std::cin >> bills;
	
	//adds line break between dollar amount and fewest bills displayed 
	std::cout << "\n";
	
	//Display fewest number of bills
	std::cout << "The fewest number of bills to get " << bills << " is:\n";
	std::cout << "============================================\n";
	
	std::cout << "$20 bills " << bills / 20 << "\n";
	result = bills % 20;

	std::cout << "$10 bills " << bills / 10 << "\n";
	result = bills % 10;

	std::cout << "$5 bills " << bills / 5 << "\n";
	result = bills % 5;

	std::cout << "$1 bills " << bills / 1 << "\n";
}

