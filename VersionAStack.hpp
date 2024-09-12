// VersionAStack.hpp
// Implementation for the Version A Stack using arrays

#ifndef VERSIONASTACK_HPP
#define VERSIONASTACK_HPP

#include "Bigram.hpp"

class VersionAStack {
public:

    // Constructor
    VersionAStack();

    // Destructor
    ~VersionAStack();

    // Push bigram onto top of stack
    int push(const Bigram& bigram);

    // Remove bigram from top of stack
    int pop(Bigram& bigram);

    // Show contents and stack pointer
    int status() const;

    // Returns true if stack is full. Otherwise false
    bool isFull() const;

    // Returns true if stack is empty. Otherwise false
    bool isEmpty() const;

private:
    // Max size of stack
    int stackSize;

    // Stack pointer
    Bigram* stackArray;

    // Indicates the top index of the stack
    int top;
};

#endif
