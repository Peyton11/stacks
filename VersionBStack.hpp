// VersionBStack.hpp
// Interface for the Version B Stack. Using real pointers that “know” bigrams

#ifndef VERSIONBSTACK_HPP
#define VERSIONBSTACK_HPP

class VersionBStack {
public:
    // Push bigram onto top of stack
    int push();

    // Remove bigram from top of stack
    int pop();

    // Show contents and stack pointer
    int status();

private:

};

#endif