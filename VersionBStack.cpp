// VersionBStack.cpp
// Implementation for the Version B Stack

#include "VersionBStack.hpp"
#include "Bigram.hpp"
#include <iostream>

// Constructor. Initialize data members and allocate memory for stack
VersionBStack::VersionBStack()
    : stackSize(6), top(-1) {
        stackArray = new Bigram[stackSize];
    }

// Destructor
VersionBStack::~VersionBStack() {

    // Move pointer to first index of array. This is necessary to free the array's memory.
    // It cannot point to any index but the first
    stackArray -= top + 1;

    // Free memeory
    delete[] stackArray;
    stackArray = nullptr;
}

// Push bigram onto top of stack
int VersionBStack::push(const Bigram& bigram) {
    if (isFull())
        return -1;
    else {
        ++top;
        *(++stackArray) = bigram;
        return 0;
    }
}

// Remove bigram from top of stack
int VersionBStack::pop(Bigram& bigram) {
    if (isEmpty()) {
        return -1;
    }
    else {
        bigram = *(stackArray--);
        --top;
        return 0;
    }
}

// Show contents and stack pointer
int VersionBStack::status() const {
    if (isEmpty()) {
        return -1;
    }

    // Create temporary variables to avoid messing up internal structure of stack (actual values of top and stackArray).
    Bigram* tempPtr = stackArray;
    int tempTop = top;

    // Output bigram at the top of the stack and output the entire stack
    std::cout << "Stack pointer: " << (*stackArray).characters << '\n';
    while (tempPtr != nullptr && tempTop >= 0) {
        std::cout << "Index " << tempTop << "- " << (*tempPtr).characters << '\n';
        --tempPtr;
        --tempTop;
    }

    return 0;
}

// Returns true if stack is full. Otherwise false
bool VersionBStack::isFull() const {
    if (top == stackSize - 1)
        return true;
    else
        return false;
}

// Returns true if stack is empty. Otherwise false
bool VersionBStack::isEmpty() const {
    if (top == -1)
        return true;
    else
        return false;
}
