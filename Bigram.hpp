// Bigram.hpp
// Struct that holds bigram

#ifndef BIGRAM_HPP
#define BIGRAM_HPP

#include <cctype>

struct Bigram {
    char first;
    char second;

    // Default constructor
    Bigram() = default;

    // Constructor to initialize bigram
    Bigram(char first, char second)
        : first(toupper(first)), second(toupper(second))
        {}
};

#endif
