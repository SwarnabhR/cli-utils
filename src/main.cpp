#include <iostream>
#include <string>
#include "clear.h"
#include "print_help.h"
void print_version()
{
    std::cout << "CLI Utilities Terminal, version 1.0" << std::endl;
}

int main()
{
    std::string input;

    std::cout << "Welcome to CLI Utilities!" << std::endl;

    while (true)
    {
        // Print a prompt
        std::cout << "> ";

        // Get input from the user
        std::getline(std::cin, input);

        // Exit the loop if the user types 'exit'
        if (input == "exit")
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else if (input == "help")
        {
            print_help();
        }
        else if (input == "version")
        {
            print_version();
        }
        else if (input == "clear")
        {
            clear_screen();
        }
        else
        {
            std::cout << "Unknown command: " << input << std::endl;
            std::cout << "Type 'help' to see available commands." << std::endl;
        }
    }
    return 0;
}