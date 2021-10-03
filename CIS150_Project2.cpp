
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name:Brandon Webb
// Date:10/2/21
// Assignment: CIS150 Hangman Homework 2
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



#include <iostream>
#include <string>


int main()
{
	int guesses=0;
	char Letter;
	std::string word = "flash";
	std::string guess;
	std::string tempWord = "-----" ;

		
	if (5 - guesses > 0)
	{
		std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";
		std::cout << "You have " << 5 - guesses << " guesses left. Guess a letter:  ";
		std::cin >> Letter;

		if (std::tolower(Letter) == word.at(0)) {
			std::cout << "You guessed the first letter correct! \n";
			tempWord.at(0) = std::tolower(Letter);
		}
		if (std::tolower(Letter) == word.at(1)) {
			std::cout << "You guessed the second letter correct! \n";
			tempWord.at(1) = std::tolower(Letter);
		}
		if (std::tolower(Letter) == word.at(2)) {
			std::cout << "You guessed the third letter correct! \n";
			tempWord.at(2) = std::tolower(Letter);
		}
		if (std::tolower(Letter) == word.at(3)) {
			std::cout << "You guessed the fourth letter correct! \n";
			tempWord.at(3) = std::tolower(Letter);
		}
		if (std::tolower(Letter) == word.at(4)) {
			std::cout << "You guessed the fifth letter correct! \n";
			tempWord.at(4) = std::tolower(Letter);
		}
		std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";
		
		
		
		std::cout << "You have " << 5 - guesses << " guesses left. Take a guess at the word: ";
		guesses++;
		std::cin >> guess;
		if (std::tolower(guess.at(0)) == word.at(0)
			&& std::tolower(guess.at(1)) == word.at(1)
			&& std::tolower(guess.at(2)) == word.at(2)
			&& std::tolower(guess.at(3)) == word.at(3)
			&& std::tolower(guess.at(4)) == word.at(4))
		{
			std::cout << "You guessed the word correctly in " << guesses + 1 << " guesses! You Win!";
		}
		else
		{
			if (5 - guesses > 0)
			{
				std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";
				std::cout << "You have " << 5 - guesses << " guesses left. Guess a letter:  ";
				std::cin >> Letter;

				if (std::tolower(Letter) == word.at(0)) {
					std::cout << "You guessed the first letter correct! \n";
					tempWord.at(0) = std::tolower(Letter);
				}
				if (std::tolower(Letter) == word.at(1)) {
					std::cout << "You guessed the second letter correct! \n";
					tempWord.at(1) = std::tolower(Letter);
				}
				if (std::tolower(Letter) == word.at(2)) {
					std::cout << "You guessed the third letter correct! \n";
					tempWord.at(2) = std::tolower(Letter);
				}
				if (std::tolower(Letter) == word.at(3)) {
					std::cout << "You guessed the fourth letter correct! \n";
					tempWord.at(3) = std::tolower(Letter);
				}
				if (std::tolower(Letter) == word.at(4)) {
					std::cout << "You guessed the fifth letter correct! \n";
					tempWord.at(4) = std::tolower(Letter);
				}
				std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";



				std::cout << "You have " << 5 - guesses << " guesses left. Take a guess at the word: ";
				guesses++;
				std::cin >> guess;
				if (std::tolower(guess.at(0)) == word.at(0)
					&& std::tolower(guess.at(1)) == word.at(1)
					&& std::tolower(guess.at(2)) == word.at(2)
					&& std::tolower(guess.at(3)) == word.at(3)
					&& std::tolower(guess.at(4)) == word.at(4))
				{
					std::cout << "You guessed the word correctly in " << guesses + 1 << " guesses! You Win!";

				}
				else
				{
					if (5 - guesses > 0)
					{
						std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";
						std::cout << "You have " << 5 - guesses << " guesses left. Guess a letter:  ";
						std::cin >> Letter;

						if (std::tolower(Letter) == word.at(0)) {
							std::cout << "You guessed the first letter correct! \n";
							tempWord.at(0) = std::tolower(Letter);
						}
						if (std::tolower(Letter) == word.at(1)) {
							std::cout << "You guessed the second letter correct! \n";
							tempWord.at(1) = std::tolower(Letter);
						}
						if (std::tolower(Letter) == word.at(2)) {
							std::cout << "You guessed the third letter correct! \n";
							tempWord.at(2) = std::tolower(Letter);
						}
						if (std::tolower(Letter) == word.at(3)) {
							std::cout << "You guessed the fourth letter correct! \n";
							tempWord.at(3) = std::tolower(Letter);
						}
						if (std::tolower(Letter) == word.at(4)) {
							std::cout << "You guessed the fifth letter correct! \n";
							tempWord.at(4) = std::tolower(Letter);
						}
						std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";



						std::cout << "You have " << 5 - guesses << " guesses left. Take a guess at the word: ";
						guesses++;
						std::cin >> guess;
						if (std::tolower(guess.at(0)) == word.at(0)
							&& std::tolower(guess.at(1)) == word.at(1)
							&& std::tolower(guess.at(2)) == word.at(2)
							&& std::tolower(guess.at(3)) == word.at(3)
							&& std::tolower(guess.at(4)) == word.at(4))
						{
							std::cout << "You guessed the word correctly in " << guesses + 1 << " guesses! You Win!";

						}
						else
						{
							if (5 - guesses > 0)
							{
								std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";
								std::cout << "You have " << 5 - guesses << " guesses left. Guess a letter:  ";
								std::cin >> Letter;

								if (std::tolower(Letter) == word.at(0)) {
									std::cout << "You guessed the first letter correct! \n";
									tempWord.at(0) = std::tolower(Letter);
								}
								if (std::tolower(Letter) == word.at(1)) {
									std::cout << "You guessed the second letter correct! \n";
									tempWord.at(1) = std::tolower(Letter);
								}
								if (std::tolower(Letter) == word.at(2)) {
									std::cout << "You guessed the third letter correct! \n";
									tempWord.at(2) = std::tolower(Letter);
								}
								if (std::tolower(Letter) == word.at(3)) {
									std::cout << "You guessed the fourth letter correct! \n";
									tempWord.at(3) = std::tolower(Letter);
								}
								if (std::tolower(Letter) == word.at(4)) {
									std::cout << "You guessed the fifth letter correct! \n";
									tempWord.at(4) = std::tolower(Letter);
								}
								std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";



								std::cout << "You have " << 5 - guesses << " guesses left. Take a guess at the word: ";
								guesses++;
								std::cin >> guess;
								if (std::tolower(guess.at(0)) == word.at(0)
									&& std::tolower(guess.at(1)) == word.at(1)
									&& std::tolower(guess.at(2)) == word.at(2)
									&& std::tolower(guess.at(3)) == word.at(3)
									&& std::tolower(guess.at(4)) == word.at(4))
								{
									std::cout << "You guessed the word correctly in " << guesses + 1 << " guesses! You Win!";

								}
								else
								{
									if (5 - guesses > 0)
									{
										std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";
										std::cout << tempWord << "\n";
										std::cout << "You have " << 5 - guesses << " guesses left. Guess a letter:  ";
										std::cin >> Letter;

										if (std::tolower(Letter) == word.at(0)) {
											std::cout << "You guessed the first letter correct! \n";
											tempWord.at(0) = std::tolower(Letter);
										}
										if (std::tolower(Letter) == word.at(1)) {
											std::cout << "You guessed the second letter correct! \n";
											tempWord.at(1) = std::tolower(Letter);
										}
										if (std::tolower(Letter) == word.at(2)) {
											std::cout << "You guessed the third letter correct! \n";
											tempWord.at(2) = std::tolower(Letter);
										}
										if (std::tolower(Letter) == word.at(3)) {
											std::cout << "You guessed the fourth letter correct! \n";
											tempWord.at(3) = std::tolower(Letter);
										}
										if (std::tolower(Letter) == word.at(4)) {
											std::cout << "You guessed the fifth letter correct! \n";
											tempWord.at(4) = std::tolower(Letter);
										}
										std::cout << tempWord.at(0) << " " << tempWord.at(1) << " " << tempWord.at(2) << " " << tempWord.at(3) << " " << tempWord.at(4) << "\n";



										std::cout << "You have " << 5 - guesses << " guesses left. Take a guess at the word: ";
										guesses++;
										std::cin >> guess;
										if (std::tolower(guess.at(0)) == word.at(0)
											&& std::tolower(guess.at(1)) == word.at(1)
											&& std::tolower(guess.at(2)) == word.at(2)
											&& std::tolower(guess.at(3)) == word.at(3)
											&& std::tolower(guess.at(4)) == word.at(4))
										{
											std::cout << "You guessed the word correctly in " << guesses + 1 << " guesses! You Win!";

										}
									}
								}
							}
						}
					}	
				}
			}
		}
	}
}

