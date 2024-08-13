#include "grep.h"
#include <iostream>
#include <fstream>
#include <string>

void grep(const std::string &pattern, const std::string &filename)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open file" << filename << std::endl;
        return;
    }

    std::string line;
    int line_number = 1;
    while (std::getline(file, line))
    {
        if (line.find(pattern) != std::string::npos)
        {
            std::cout << line_number << ": " << line << std::endl;
        }
        line_number++;
    }
    file.close();
}