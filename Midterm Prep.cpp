// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: Brandon Webb
// Date: 10-15-21
//Desc: Midterm pre test
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <string>
int year;
int cyear = 2021;
int age;
int vowels = 0;

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
			std::cout << "Backwards: " << word.at(2) << word.at(1) << word.at(0);
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

		if (word.length() > 3)
		{
			std::cout << "You entered a word that is more than 3 letters.";
		}
		if (word.length() < 3)
		{
			std::cout << "You entered a word that is less than 3 letters.";
		}
		if (word.length() == 3)
		{
			if (word.length() == 3)
			{

				if (word.at(0) == 'a')
				{
					vowels += 1;
					vowels = vowels + 1;
					vowels++;
				}
				if (word.at(1) == 'a')
				{
					vowels++;
				}
				if (word.at(2) == 'a')
				{
					vowels++;
				}

				if (word.at(0) == 'e')
				{
					vowels += 1;
					vowels = vowels + 1;
					vowels++;
				}
				if (word.at(1) == 'e')
				{
					vowels++;
				}
				if (word.at(2) == 'e')
				{
					vowels++;
				}

				if (word.at(0) == 'i')
				{
					vowels += 1;
					vowels = vowels + 1;
					vowels++;
				}
				if (word.at(1) == 'i')
				{
					vowels++;
				}
				if (word.at(2) == 'i')
				{
					vowels++;
				}

				if (word.at(0) == 'o')
				{
					vowels += 1;
					vowels = vowels + 1;
					vowels++;
				}
				if (word.at(1) == 'o')
				{
					vowels++;
				}
				if (word.at(2) == 'o')
				{
					vowels++;
				}

				if (word.at(0) == 'u')
				{
					vowels += 1;
					vowels = vowels + 1;
					vowels++;
				}
				if (word.at(1) == 'u')
				{
					vowels++;
				}
				if (word.at(2) == 'u')
				{
					vowels++;
				}

				if (word.at(0) == 'a' || word.at(0) == 'e' || word.at(0) == 'i' || word.at(0) == 'o' || word.at(0) == 'u')
				{
					vowels++;
				}
				if (word.at(1) == 'a' || word.at(1) == 'e' || word.at(1) == 'i' || word.at(1) == 'o' || word.at(1) == 'u')
				{
					vowels++;
				}
				if (word.at(2) == 'a' || word.at(2) == 'e' || word.at(2) == 'i' || word.at(2) == 'o' || word.at(2) == 'u')
				{
					vowels++;
				}
				if (word.length() == 3)
				{
					std::cout << "The word" << " " << word << " " << "contains" << " " << vowels << " " << "vowels. ";
				}
			}
		}
	}
}
