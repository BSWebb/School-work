//+++++++++++++++++++++++++++++++++++++++++++++++++++++
// Author: Brandon Webb
// Date: 9-10-21
// Desc: Homework #1 Project 2 of 2
// This program shows a users favorite city
//+++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>

int main()
{
	std::string x;
	int pos;
	std::cout << "Input your favorite city:";
	
	// User input for favorite city
	std::cin >> x;
	std::cout << "Which character would you like to display?:";
	std::cin >> pos;
	
	// Line break
	std::cout << "\n";

	std::cout << "The User Entered: " << x << "\n";
	std::cout << "The character at position " << pos << " is:  " << x.at(pos);
}
