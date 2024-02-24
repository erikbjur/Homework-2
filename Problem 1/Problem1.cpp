// Write a program that asks the user for a number,
// then prints all the even numbers from 0 to that number to the screen.  
// If the user enters an odd number, this number won't be printed, only even numbers.

#include <iostream>
#include "MyFunctions.h"

int main() {
    // Ask the user for a number
    std::cout << "Enter an integer: " << std::endl;
    int number = 0;
    std::cin >> number;

    // Now call our print even numbers function
    std::cout << "Printing even numbers..." << std::endl;
    
    MyFunctions::PrintEvenNumbers( number );
    return 0;
}

//Build with clang++ Problem1.cpp MyFunctions.cpp -o prob1.exe

