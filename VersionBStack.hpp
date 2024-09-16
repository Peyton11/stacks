// VersionBStack.hpp
// Interface for the Version B Stack. Using real pointers that “know” bigrams

#ifndef VERSIONBSTACK_HPP
#define VERSIONBSTACK_HPP

#include "Bigram.hpp"

class VersionBStack {
public:

    // Constructor
    VersionBStack();

    // Destructor
    ~VersionBStack();

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
