// VersionBStack.cpp
// Implementation for the Version B Stack

#include "VersionBStack.hpp"
#include "Bigram.hpp"
#include <iostream>
#include <cctype>

// Constructor
VersionBStack::VersionBStack()
    : nodeCount(0) {
    top = nullptr;
}

// Destructor
VersionBStack::~VersionBStack() {
    BigramNode* nodePtr = top;
    BigramNode* nextNode = nullptr;
    while (nodePtr != nullptr) {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

// Push bigram onto top of stack
int VersionBStack::push(const Bigram& bigram) {

    if (isFull())
        return -1;

    BigramNode* newNode = new BigramNode;
    newNode->value = bigram;

    ++nodeCount;
    if (isEmpty()) {
        top = newNode;
        newNode->next = nullptr;
    } else {
        newNode->next = top;
        top = newNode;
    }

    return 0;
}

// Remove bigram from top of stack
int VersionBStack::pop(Bigram& bigram) {
    if (isEmpty())
        return -1;
    else {
        BigramNode* temp = nullptr;
        bigram.first = top->value.first;
        bigram.second = top->value.second;
        temp = top->next;
        delete top;
        top = temp;
        --nodeCount;
        return 0;
    }
}

// Show contents and stack pointer
int VersionBStack::status() const {
    if (isEmpty())
        return -1;

    // Output the top bigram of the stack
    std::cout << "Stack top: " << top->value.first << top->value.second << '\n';

    // Traverse each node to output the entire stack
    BigramNode* nodePtr = top;
    int indexNumber = nodeCount - 1;
    while (nodePtr != nullptr) {
        std::cout << "Index " << indexNumber << "- " << nodePtr->value.first << nodePtr->value.second << '\n';
        nodePtr = nodePtr->next;
        --indexNumber;
    }

    return 0;
}

// Returns true if stack is full. Otherwise false
bool VersionBStack::isFull() const {
    if (nodeCount == 6)
        return true;
    else
        return false;
}


// Returns true if stack is empty. Otherwise false
bool VersionBStack::isEmpty() const {
    if (nodeCount == 0)
        return true;
    else
        return false;
}
