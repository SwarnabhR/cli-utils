#include <iostream>
#include <string>
#ifdef _WIND32
#include <windows.h>
#else
#include <cstdlib>
#endif

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void print_help()
{
    std::cout << "Available commands:\n";
    std::cout << "    help    - Show this help message\n";
    std::cout << "    version - Show the program version\n";
    std::cout << "    exit    - Exit the terminal\n";
    std::cout << "    clear     - Clear the screen\n";
}

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