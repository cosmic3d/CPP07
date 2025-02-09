#pragma once

#include "array.hpp"

// Default constructor
template <typename T>
Array<T>::Array() : elements(NULL), length(0) {}

// Constructor with size
template <typename T>
Array<T>::Array(unsigned int n) : length(n) {
    elements = new T[n]();
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array& other) : length(other.length) {
    elements = new T[length];
    for (unsigned int i = 0; i < length; i++) {
        elements[i] = other.elements[i];
    }
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] elements;
        length = other.length;
        elements = new T[length];
        for (unsigned int i = 0; i < length; i++) {
            elements[i] = other.elements[i];
        }
    }
    return *this;
}

// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] elements;
}

// Access operator
template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= length) {
        throw std::out_of_range("Index out of bounds");
    }
    return elements[index];
}

// Const access operator
template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= length) {
        throw std::out_of_range("Index out of bounds custom");
    }
    return elements[index];
}

// Size function
template <typename T>
unsigned int Array<T>::size() const {
    return length;
}
