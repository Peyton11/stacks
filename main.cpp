// main.cpp
// Use push, pop, and status methods from Version A and Version B stacks.

#include "VersionAStack.hpp"
#include "VersionBStack.hpp"
#include <iostream>

int main() {

    // Prompt user for which stack to use. Continue prompting until valid answer is inputted
    char stackChoice;
    do {
        std::cout << "Stack A or Stack B? [A/B]: ";
        std::cin >> stackChoice;
    } while (stackChoice != 'A' && stackChoice != 'a' && stackChoice != 'B' && stackChoice != 'b');

    // Use push, pop, and status methods with corresponding stack
    if (stackChoice == 'A' || stackChoice == 'a') {

        VersionAStack stack;

        // TEST
        stack.push("aa");
        stack.push("bb");
        stack.push("cc");
        stack.push("dd");
        stack.push("ee");
        stack.push("ff");
        stack.status();

    } else if (stackChoice == 'B' || stackChoice == 'b') {

    }

    return 0;
}