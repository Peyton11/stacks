// VersionAStack.hpp
// Interface for the Version A Stack. Contiguous concept, nominal vector

#ifndef VERSIONASTACK_HPP
#define VERSIONASTACK_HPP

class VersionAStack {
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
