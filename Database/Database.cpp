// Database.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void print_prompt() 
{
    std::cout << "db > ";
}

std::string get_input() {
    std::string s;
    std::cin >> s;
    return s;
}

int main(int argc, char* argv[])
{
    while (true) {
        print_prompt();
        auto input = get_input();
        if (input == ".exit") {
            return EXIT_SUCCESS;
        }
        else {
            std::cout << "Unrecognized command: " << input << "\n";
        }
    }
}
