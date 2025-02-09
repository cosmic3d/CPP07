#pragma once
#include <cstddef> // For size_t
#include <iostream>

// Template function to iterate over an array and apply a function to each element
template <typename T, typename Func>
void iter(T* array, size_t length, Func function) {
    for (size_t i = 0; i < length; ++i) {
        function(array[i]);
    }
}