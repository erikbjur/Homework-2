#include "MyFunctions.h"
#include <iostream>

void MyFunctions::DrawTriangle( int number_of_stars ) {
    // Note that if the triangle has 5 stars on the bottom it takes up a grid of 5 x 5
    // The first line has 4 spaces and 1 star
    // The second line has 3 spaces and 2 stars
    // ...
    // Until the last row has 0 spaces and 5 stars

    // Initialize a row counter
    int stars = 1;

    // Initialize a space counter
    int spaces = number_of_stars - 1;

    for(int stars = 1; stars <= number_of_stars; stars++ ) {
        DrawRow( spaces, stars );
        // stars are automatically incremented in the loop
        // but we still need to remove a space manually
        spaces = spaces - 1;
    }
}

void MyFunctions::DrawRow( int number_of_spaces, int number_of_stars ) {
    // First print out the spaces
    for( int i = 0; i < number_of_spaces; i++ ) {
        std::cout << " ";
    }
    // Now print out the stars
    for( int i = 0; i < number_of_stars; i++ ) {
        std::cout << "*";
    }
    // Now go to the next line
    std::cout << std::endl;
}