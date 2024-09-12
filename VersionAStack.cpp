// VersionAStack.cpp
// Implementation for the Version A Stack. Contiguous concept, nominal vector

#include "VersionAStack.hpp"
#include <iostream>
#include <cctype>

// Constructor. Sets max stack size to 6
VersionAStack::VersionAStack()
    : stackSize(6), top(-1) {
        stackArray = new char*[6];
    }

// Destructor
VersionAStack::~VersionAStack() {
    delete [] stackArray;
}


// Push bigram onto top of stack
int VersionAStack::push(char bigram[2]) {
    if (isFull()) {
        return -1;
    } else {
        ++top;
        stackArray[top] = bigram;
        return 0;
    }
}

// Remove bigram from top of stack
int VersionAStack::pop() {
    if (isEmpty()) {
        std::cout << "The stack is empty- nothing to pop.\n";
        return -1;
    }
    else {
        --top;
        return 0;
    }
}

// Show contents and stack pointer
int VersionAStack::status() const {
    if (isEmpty()) {
        std::cout << "The stack is empty- nothing to display.\n";
        return -1;
    }

    std::cout << "Stack pointer: " << stackArray[top] << '\n';
    for (int i = top; i >= 0; --i) {
        std::cout << "Index " << i << "- " << stackArray[i] << '\n';
    }
    return 0;
}

// Returns true if stack is full. Otherwise false
bool VersionAStack::isFull() const {
    if (top == stackSize - 1)
        return true;
    else
        return false;
}

// Returns true if stack is empty. Otherwise false
bool VersionAStack::isEmpty() const {
    if (top == -1)
        return true;
    else
        return false;
}
