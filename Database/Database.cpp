// Database.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <optional>
#include "metaCommand.h"
#include "statements.h"

void print_prompt() 
{
    std::cout << "db > ";
}

std::string get_input() {
    std::string s;
    std::getline (std::cin,s);
    return s;
}


int main(int argc, char* argv[])
{
    while (true) {
        print_prompt();
        auto input = get_input();
        if (input[0] == '.') {
            auto metaCommand  = MetaCommand::parseMetaCommand(input);
            if (!metaCommand.has_value()) {
                std::cout << "Unrecognized meta command: " << input << "\n";
                continue;
            }
            metaCommand.value().executeMetaComand();

        } else {
            auto parsedStatement = Statements::parseStatement(input);
            if (!parsedStatement.has_value()) {
                std::cout << "Unrecognized statement: " << input << "\n";
                continue;
            }
            parsedStatement.value().exectuteStaement();
        }
    }
}
