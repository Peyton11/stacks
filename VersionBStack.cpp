// VersionBStack.cpp
// Implementation for the Version B Stack

#include "VersionBStack.hpp"
#include <iostream>
#include <cctype>

// Constructor
VersionBStack::VersionBStack()
    : nodeCount(0) {
    top = nullptr;
}

// Destructor
VersionBStack::~VersionBStack() {

}

// Push bigram onto top of stack
int VersionBStack::push(const char bigram[2]) {

    if (isFull())
        return -1;

    BigramNode* newNode = new BigramNode;
    newNode->value[0] = toupper(bigram[0]);
    newNode->value[1] = toupper(bigram[1]);

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
int VersionBStack::pop(const char bigram[2]) {
    if (isEmpty())
        return -1;
    else {
        BigramNode* temp = nullptr;
        bigram = top->value;
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
    std::cout << "Stack top: " << top->value << '\n';

    // Traverse each node to output the entire stack
    BigramNode* nodePtr = top;
    int indexNumber = nodeCount - 1;
    while (nodePtr != nullptr) {
        std::cout << "Index " << indexNumber << "- " << nodePtr->value << '\n';
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
