// Bigram.hpp
// Struct that holds bigram

#ifndef BIGRAM_HPP
#define BIGRAM_HPP

#include <cctype>

struct Bigram {

    char characters[3];

    // Default constructor
    Bigram() = default;

    // Constructor to initialize bigram
    Bigram(char first, char second) {
        characters[0] = toupper(first);
        characters[1] = toupper(second);
        characters[2] = '\0';
    }
};

#endif
