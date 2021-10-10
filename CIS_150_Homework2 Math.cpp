//+++++++++++++++++++++++++++++++++++++++++++++++++
//Author: Brandon Webb
//Date: 10/7/21
//Desc: Math menu
//+++++++++++++++++++++++++++++++++++++++++++++++++++

//int and chars to hold input
#include <iostream>
int choice;
int num;
int numb;
char add = '+';
char sub = '-';
char multiply = '*';
char divide = '/';

int main()
{
    std::cout << "What would you like to do?\n";
    std::cout << "1.           Add 2 numbers\n";
    std::cout << "2.           Subtract 2 numbers\n";
    std::cout << "3.           Multiply 2 numbers\n";
    std::cout << "4.           Divide 2 numbers\n";
    std::cout << "Please enter your selection: ";
    std::cin >> choice;
    
    if (choice > 4)
    {
        std::cout << "You broke my program. You needed to insert a number between 1 and 4.\n";
    }
    if (choice < 5)
    {
        std::cout << "Enter the first number: ";
        std::cin >> num;
        std::cout << "Enter the second number: ";
        std::cin >> numb;
    //If statement to determine the inputs the user has made. If they chose anything other than 1-4 the program will stop them and display an error. If they choose
    //correctly, they can continue to input numbers to do their math!
        if (numb < 1);
        {
            if (choice == 1)
            {
                std::cout << "You chose to perform the following operation: \n";
                std::cout << num << add << numb << "=";
                std::cout << num + numb << "\n";
               
                std::cout << "Thanks for using the program. Bye";
            }
            else if (choice == 2)
            {
                std::cout << "You chose to perform the following operation: \n";
                std::cout << num << sub << numb << "=";
                std::cout << num - numb << "\n";
               
                std::cout << "Thanks for using the program. Bye";
            }
            else if (choice == 3)
            {
                std::cout << "You chose to perform the following operation: \n";
                std::cout << num << multiply << numb << "=";
                std::cout << num * numb << "\n";
               
                std::cout << "Thanks for using the program. Bye";
            }
            if (numb == 0)
            {
                std::cout << "You are trying to break my program. You cannot divide by 0.";
            }
            else if (choice == 4)
            {
                std::cout << "You chose to perform the following operation: \n";
                std::cout << num << divide << numb << "=";
                std::cout << num / numb << "\n";
             
                std::cout << "Thanks for using the program. Bye";
            }
        }
       
    }


    
}

