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
/*
    // Now we have all of our numbers lets figure out how to sort them
    // Create a variable to store the sorted list. Initialize with zeros
    int sorted_numbers[5]{0};  // Note that I need to use "-std=c++17" when I build

    // Assign the first value of the sorted list to the numbers list
    // Gota start somewhere...
    sorted_numbers[0] = numbers[0];

    // Start the loop at the second number and compare to the previous
    for(int i = 1; i < 5; i++) {
        // Check if the next number is less than the current minimum
        if( numbers[i] < sorted_numbers[0] ) {
            // Store the new minimum number
            sorted_numbers[0] = numbers[i];
        }
    }
    // At this point I now have the minimum number as the first sorted number

    // Now lets loop again and again and look for the next minimum number
    // but it has to be also bigger than the previous minimum.
    for(int index = 1; index < 5; index++ ){
        // First, find the next bigger number than the previous minimum
        for( int i = 0; i < 5; i++ ) {
            if( sorted_numbers[index - 1] < numbers[i] ) {
                // Save the number to start the next iteration
                sorted_numbers[index] = numbers[i];
                // No need to look for another number, so break out.
                break;
            }
        }
        
        // Now sort similar as we did before
        for(int i = 1; i < 5; i++) {
            // Check if the next number is less than the current minimum
            if( numbers[i] < sorted_numbers[index] ) {
                // Now check if it's bigger than our old minimum located at
                // sorted_numbers[ previous index ]
                if( numbers[i] > sorted_numbers[index - 1] ){
                    // Store the new minimum number for this index
                    sorted_numbers[index] = numbers[i];
                }
            }
        }
    }
*/

// Here's a super fast and efficient way to sort using what you already know
    for(int i = 0; i < 5 - 1; i++) { 
        for(int j = 0; j < 5 - i - 1; j++) { 
            if(numbers[j] > numbers[j + 1]) { 
                int tmp = numbers[j]; 
                numbers[j] = numbers[j + 1]; 
                numbers[j + 1] = tmp; 
            } 
        } 
    }
// Done with super fast method

    // Now print out the list of sorted numbers
    for( int i = 0; i < 5; i++ ) {
        //std::cout << sorted_numbers[i] << " ";
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// void simple_sort(int arr[], int n)
// {
//     int count = 0;
//     for(int i = 0; i < n - 1; i++) { 
//         for(int j = 0; j < n - i - 1; j++) { 
//             if(arr[j] > arr[j+1]) { 
//                 int tmp = arr[j]; 
//                 arr[j] = arr[j+1]; 
//                 arr[j+1] = tmp; 
//                 count++; 
//             } 
//         } 
//     } 
// }