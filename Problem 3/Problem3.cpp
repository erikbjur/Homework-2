// Write an application that asks the user for 5 numbers.  
// Write a function that sorts these numbers from low to high, 
// then prints out the numbers.

#include <iostream>

int main() {
    // Create a matrix holding 5 ints and initialize to zero
    // Note if we initialize like this, we need to use "-std::c++17" or newer
    int numbers[5] {0};

    // Ask the user for all five numbers
    for( int i = 0; i < 5; i++ ) {
        std::cout << "Enter number " << i + 1 << ":" << std::endl;
        std::cin >> numbers[i];
    }

    // Now we have all of our numbers lets figure out how to sort them
    // Create a variable to store a minimum number. Initialize with our first number
    int sorted_numbers[5]{0};
    sorted_numbers[0] = numbers[0];

    // Start the loop at the second number
    for(int i = 1; i < 5; i++) {
        // Check if the next number is less than the current minimum
        if( numbers[i] < sorted_numbers[0] ) {
            // Store the new minimum number
            sorted_numbers[0] = numbers[i];
        }
    }

    // Now lets loop again and look for the minimum number
    // but it has to be also bigger than the old minimum.
    // Start the loop at the second number
    for(int index = 1; index < 5; index++ ){
        // find the next bigger number than the previous minimum
        for( int i = 0; i < 5; i++ ) {
            if( sorted_numbers[index - 1] < numbers[i] ) {
                // Save the number to start the next iteration
                sorted_numbers[index] = numbers[i];
                // No need to look for another number, so break out.
                break;
            }
        }
        
        for(int i = 1; i < 5; i++) {
            // Check if the next number is less than the current minimum
            if( numbers[i] < sorted_numbers[index] ) {
                // Now check if it's bigger than our old minimum located at
                // sorted_numbers[0]
                if( numbers[i] > sorted_numbers[index - 1] ){
                    // Store the new minimum number
                    sorted_numbers[index] = numbers[i];
                }
            }
        }
    }

    // Now print out the list of sorted numbers
    for( int i = 0; i < 5; i++ ) {
        std::cout << sorted_numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}