// VersionAStack.cpp
// Implementation for the Version A Stack. Stack of bigrams that cannot dynamically resize. Max size of 6.

#include "VersionAStack.hpp"
#include "Bigram.hpp"
#include <iostream>

// Constructor. Sets max stack size to 6
VersionAStack::VersionAStack()
    : stackSize(6), top(-1) {
        stackArray = new Bigram[stackSize];
    }

// Destructor
VersionAStack::~VersionAStack() {
    delete [] stackArray;
}

// Push bigram onto top of stack
int VersionAStack::push(const Bigram& bigram) {
    if (isFull())
        return -1;
    else {
        ++top;
        stackArray[top] = bigram;
        return 0;
    }
}

// Remove bigram from top of stack
int VersionAStack::pop(Bigram& bigram) {
    if (isEmpty()) {
        return -1;
    }
    else {
        bigram = stackArray[top];
        --top;
        return 0;
    }
}

// Show contents and stack pointer
int VersionAStack::status() const {
    if (isEmpty()) {
        return -1;
    }

    std::cout << "Stack pointer: " << stackArray[top].first << stackArray[top].second << '\n';
    for (int i = top; i >= 0; --i) {
        std::cout << "Index " << i << "- " << stackArray[i].first << stackArray[i].second << '\n';
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
