// main.cpp
// Use push, pop, and status methods from Version A and Version B stacks.

#include "VersionAStack.hpp"
#include "VersionBStack.hpp"
#include "Bigram.hpp"
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

        // Declare stack choice
        VersionAStack stack;

        // Flag to perform more operations
        bool again = true;

        while (again) {

            // User inputs which stack operation to perform
            int operationChoice;
            do {
                std::cout << "Select stack operation:\nPush[1]\nPop[2]\nStatus[3]\nEnd Program[4]\nOperation Choice: ";
                std::cin >> operationChoice;
            } while (operationChoice != 1 && operationChoice != 2 && operationChoice != 3 && operationChoice != 4);

            // User inputted bigram
            char inputBigram[3];

            // Status from stack operations. (0==success. -1==failure)
            int status;

            switch(operationChoice) {
            // Push
            case 1: {
                // Input bigram to push onto stack
                std::cout << "Input bigram: ";
                std::cin >> inputBigram;

                // Initialize bigram object with user input
                Bigram bigram(inputBigram[0], inputBigram[1]);

                status = stack.push(bigram);
                if (status != 0)
                    std::cout << "Overflow occured after pushing\n";
                else
                    std::cout << "Successfully pushed: " << bigram.first << bigram.second << '\n';
                break;
            }
            // Pop
            case 2: {
                Bigram popped;
                status = stack.pop(popped);
                if (status != 0)
                    std::cout << "Underflow occured after popping\n";
                else
                    std::cout << "Successfully popped: " << popped.first << popped.second << '\n';
                break;
            }
            // Status
            case 3: {
                status = stack.status();
                if (status != 0)
                    std::cout << "Stack is empty.\n";
                else
                    std::cout << "Successful stack!\n";
                break;
            }
            // End program
            default: {
                std::cout << "Program ended\n";
                return 0;
            }
            }

            // User inputs if they would like to perform another operation
            char choice;
            std::cout << "Would you like to perform another stack operation? [y/n] ";
            std::cin >> choice;
            if (choice != 'y' && choice != 'Y') {
                again = false;
                break;
            }
            else
                again = true;
            std::cout << '\n';
        }

    } else if (stackChoice == 'B' || stackChoice == 'b') {

        // Declare stack choice
        VersionBStack stack;

        // Flag to perform more operations
        bool again = true;

        while (again) {

            // User inputs which stack operation to perform
            int operationChoice;
            do {
                std::cout << "Select stack operation:\nPush[1]\nPop[2]\nStatus[3]\nEnd Program[4]\nOperation Choice: ";
                std::cin >> operationChoice;
            } while (operationChoice != 1 && operationChoice != 2 && operationChoice != 3 && operationChoice != 4);

            // User inputted bigram
            char inputBigram[3];

            // Status from stack operations. (0==success. -1==failure)
            int status;

            switch(operationChoice) {
            // Push
            case 1: {
                // Input bigram to push onto stack
                std::cout << "Input bigram: ";
                std::cin >> inputBigram;

                // Initialize bigram object with user input
                Bigram bigram(inputBigram[0], inputBigram[1]);

                status = stack.push(bigram);
                if (status != 0)
                    std::cout << "Overflow occured after pushing\n";
                else
                    std::cout << "Successfully pushed: " << bigram.first << bigram.second << '\n';
                break;
            }
            // Pop
            case 2: {
                Bigram popped;
                status = stack.pop(popped);
                if (status != 0)
                    std::cout << "Underflow occured after popping\n";
                else
                    std::cout << "Successfully popped: " << popped.first << popped.second << '\n';
                break;
            }
            // Status
            case 3: {
                status = stack.status();
                if (status != 0)
                    std::cout << "Stack is empty.\n";
                else
                    std::cout << "Successful stack!\n";
                break;
            }
            // End program
            default: {
                std::cout << "Program ended\n";
                return 0;
            }
            }

            // User inputs if they would like to perform another operation
            char choice;
            std::cout << "Would you like to perform another stack operation? [y/n] ";
            std::cin >> choice;
            if (choice != 'y' && choice != 'Y') {
                again = false;
                break;
            } else
                again = true;
            std::cout << '\n';
        }
    }

    std::cout << "Program ended\n";
    return 0;
}
