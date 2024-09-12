// VersionAStack.hpp
// Interface for the Version A Stack. Contiguous concept, nominal vector

#ifndef VERSIONASTACK_HPP
#define VERSIONASTACK_HPP

class VersionAStack {
public:

    // Constructor
    VersionAStack();

    // Destructor
    ~VersionAStack();

    // Push bigram onto top of stack
    int push(char[2]);

    // Remove bigram from top of stack
    int pop();

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
    char** stackArray;

    // Indicates the top index of the stack
    int top;
};

#endif
