#include "print_help.h"
#include <iostream>

void print_help()
{
    std::cout << "Available commands:\n";
    std::cout << "    help    - Show this help message\n";
    std::cout << "    version - Show the program version\n";
    std::cout << "    exit    - Exit the terminal\n";
    std::cout << "    clear   - Clear the screen\n";
    std::cout << "    grep <pattern> <filename>   - Search for specific patterns within files\n";
    std::cout << "    cat <filename>  - Displays the content of the file\n";
}
