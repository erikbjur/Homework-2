#include "MyFunctions.h"
#include <iostream>

void MyFunctions::PrintEvenNumbers(int number)
{
    // Loop through all the even numbers between 0 and our number
    for( int i = 0; i <= number; i = i + 2 ){
        std::cout << i << std::endl;
    }
}

