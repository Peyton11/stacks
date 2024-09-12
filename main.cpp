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

        // 0 = Success. -1 = failure. Check for push, pop, and status
        int status = 0;

        // Test case: trigger underflow
        status = stack.pop("aa");
        if (status != 0)
            std::cout << "Underflow ocurred after popping.\n";

        status = 0;

        // Test case: fill stack with no errors
        stack.push("aa");
        stack.push("bb");
        stack.push("cc");
        stack.push("dd");
        stack.push("ee");
        stack.push("ff");

        // Test case: trigger overflow
        status = stack.push("ff");
        if (status != 0)
            std::cout << "Overflow occurred after pushing.\n";

        stack.pop("ff");

        // output top value of stack and the entire stack
        stack.status();

    } else if (stackChoice == 'B' || stackChoice == 'b') {

        VersionBStack stack;

        // 0 = Success. -1 = failure. Check for push, pop, and status
        int status = 0;

        // Test case: trigger underflow
        status = stack.pop("aa");
        if (status != 0)
            std::cout << "Underflow ocurred after popping.\n";

        status = 0;

        // Test case: fill stack with no errors
        stack.push("aa");
        stack.push("bb");
        stack.push("cc");
        stack.push("dd");
        stack.push("ee");
        stack.push("ff");

        // Test case: trigger overflow
        status = stack.push("ff");
        if (status != 0)
            std::cout << "Overflow occurred after pushing.\n";

        stack.pop("ff");

        // output top value of stack and the entire stack
        stack.status();
    }

    return 0;
}
