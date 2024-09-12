// VersionBStack.hpp
// Interface for the Version B Stack. Using real pointers that “know” bigrams

#ifndef VERSIONBSTACK_HPP
#define VERSIONBSTACK_HPP

class VersionBStack {
public:

    // Constructor
    VersionBStack();

    // Destructor
    ~VersionBStack();

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

    // Each node contains a bigram and a pointer to the next node
    struct BigramNode
    {
        char value[2];
        BigramNode* next;
    };

    // Pointer to track top of stack
    BigramNode* top;

    int nodeCount;
};

#endif
