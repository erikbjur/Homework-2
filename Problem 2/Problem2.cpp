// Write an application that asks the user for an integer.  
// Once you have this integer, call a function stored in a 
// separate file that returns twice this number.

#include <iostream>
#include "MyFunctions.h"

int main() {
    // Ask the user for an integer
    std::cout << "Enter an integer: " << std::endl;
    int number = 0;
    std::cin >> number;

    // Now call the function to return a number that is double
    int bigger_number = MyFunctions::DoubleMyNumber( number );

    // Print the new doubled number
    std::cout << "The number twice as large is: " << bigger_number << std::endl;
    return 0;
}

//Build with clang++ Problem2.cpp MyFunctions.cpp -o prob2.exe