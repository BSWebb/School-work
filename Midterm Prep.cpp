// Midterm Prep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int year;
int cyear = 2021;
int age;

int main()
{
    std::string first;
    std::string last;
    std::string word;
    std::cout << "What year were you born: ";
    std::cin >> year;
    age = 2021 - year;
    std::cout << "Enter your first and last name: ";
    std::cin >> first >> last; "\n";
    std::cout << "Hello" << " " << first << " " << last << " " << "you are" << " " << age << " " "years old.";
    std::cout << " ";
   
    if (age < 12) 
    {
      std::cout << "So you are a child.\n";
      std::cout << "First letter of your first name: ";
      std::cout << first.at(0);
      std::cout << "\n";
      std::cout << "Last letter of your last name: ";
      std::cout << last.at(0);
    }
    else if (age > 12 && age < 17)
    {
      std::cout << "So you are a teenager.\n";
      std::cout << "Enter a 3 letter word: ";
      std::cin >> word;
      
      if (word.length() == 3)
      {
          std::cout << "Original: " << word;
          std::cout << "\n";
          std::cout << "Backwards: " << word.at(2) << word.at(1) << word.at (0);
      }
      if (word.length() > 3)
      {
          std::cout << "You entered a word that is more than 3 letters.";
      } 
      if (word.length() < 3)
      {
          std::cout << "You entered a word that is less than 3 letters.";
      }
      std::cout << "\n";
    }
    else 
    {
      std::cout << "So you are an adult.\n";
      std::cout << "Enter a 3 letter word: ";
      std::cin >> word;

      if (word.length() == 3)
      {
          std::cout << "The word" << " " << word << " " << "contains" << " " << "22" << " " << "vowels. ";
      }
      if (word.length() > 3)
      {
          std::cout << "You entered a word that is more than 3 letters.";
      }
      if (word.length() < 3)
      {
          std::cout << "You entered a word that is less than 3 letters.";
      }
      std::cout << "\n";
    }
   
}

