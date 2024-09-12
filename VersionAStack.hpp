// VersionAStack.hpp
// Implementation for the Version A Stack. Stack of bigrams that cannot dynamically resize. Max size of 6.

#ifndef VERSIONASTACK_HPP
#define VERSIONASTACK_HPP

class VersionAStack {
public:

    // Constructor
    VersionAStack();

    // Destructor
    ~VersionAStack();

    // Push bigram onto top of stack
    int push(const char bigram[2]);

    // Remove bigram from top of stack
    int pop(const char bigram[2]);

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
    char (*stackArray)[2];

    // Indicates the top index of the stack
    int top;
};

#endif
