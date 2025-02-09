#pragma once
#include <iostream>

// Template function to swap two values
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template function to find the minimum of two values
template <typename T>
T min(const T& a, const T& b) {
    return (a < b) ? a : b;
}

// Template function to find the maximum of two values
template <typename T>
T max(const T& a, const T& b) {
    return (a > b) ? a : b;
}