#include "../inc/iter.hpp"

// Function to print an element
template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

// Function to increment an element
template <typename T>
void incrementElement(T& element) {
    ++element;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original int array: ";
    iter(arr, length, printElement<int>);
    std::cout << std::endl;

    iter(arr, length, incrementElement<int>);
    
    std::cout << "Incremented int array: ";
    iter(arr, length, printElement<int>);
    std::cout << std::endl;

    // Test with a double array
    double arrD[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t lengthD = sizeof(arrD) / sizeof(arrD[0]);

    std::cout << "Original double array: ";
    iter(arrD, lengthD, printElement<double>);
    std::cout << std::endl;

    iter(arrD, lengthD, incrementElement<double>);
    
    std::cout << "Incremented double array: ";
    iter(arrD, lengthD, printElement<double>);
    std::cout << std::endl;

    // Test with a char array
    char arrC[] = {'a', 'b', 'c', 'd', 'e'};
    size_t lengthC = sizeof(arrC) / sizeof(arrC[0]);

    std::cout << "Original char array: ";
    iter(arrC, lengthC, printElement<char>);
    std::cout << std::endl;

    iter(arrC, lengthC, incrementElement<char>);
    
    std::cout << "Incremented char array: ";
    iter(arrC, lengthC, printElement<char>);
    std::cout << std::endl;
    
    return 0;
}
