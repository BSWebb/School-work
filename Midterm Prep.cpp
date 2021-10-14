// Midterm Prep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int year;
int cyear = 2021;
int age;

int main()
{
    std::string name;
    int pos;
    std::cout << "What year were you born: ";
    std::cin >> year;
    age = 2021 - year;
    std::cout << "Enter your first and last name: ";
    std::cin >> name; "\n";
    std::cout << "Hello" << " " << name << " " << "you are" << " " << age << " " "years old."; 
    std::cout << " ";
   
    if (age < 12) 
    {
      std::cout << "So you are a child.\n";
    }
    else if (age > 12 && age < 17)
    {
      std::cout << "So you ara a teenager.\n";
    }
    else 
    {
      std::cout << "So you are an adult.\n";
    }
    
   
    std::cout << "First letter of your first name: ";
    std::cout << name.at(0);
    std::cout << "\n";
    std::cout << "Last letter of your last name: \n";
}


