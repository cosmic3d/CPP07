#include <iostream>
#include "../inc/array.hpp"

int main() {
    try {
        std::cout << "Creating an array of integers with 5 elements..." << std::endl;
        Array<int> intArray(5);

        // Fill array with values
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 10;
        }

        // Display values
        std::cout << "Array contents: ";
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        // Testing copy constructor
        std::cout << "Copying the array..." << std::endl;
        Array<int> copiedArray = intArray;

        // Modify original and show copy remains unchanged
        intArray[0] = 999;
        std::cout << "Original array after modification: " << intArray[0] << std::endl;
        std::cout << "Copied array first element: " << copiedArray[0] << std::endl;

        // Test out-of-bounds exception
        std::cout << "Attempting out-of-bounds access..." << std::endl;
        std::cout << intArray[10] << std::endl; // This should throw an exception

    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
