#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
private:
    T* elements;
    unsigned int length;

public:
    Array();                          // Default constructor
    Array(unsigned int n);            // Constructor with size
    Array(const Array& other);        // Copy constructor
    Array& operator=(const Array& other); // Assignment operator
    ~Array();                         // Destructor

    T& operator[](unsigned int index);       // Subscript operator
    const T& operator[](unsigned int index) const;

    unsigned int size() const;         // Returns the number of elements
};

#include "array.tpp"
