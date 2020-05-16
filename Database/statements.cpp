#include "statements.h"
#include <iostream>

int Statements::exectuteStaement()
{
    switch (m_type) {
    case StatementType::INSERT:
        std::cout << "INSERT HERE" << '\n'; break;
    case StatementType::SELECT:
        std::cout << "SELECT HERE" << '\n'; break;
    }

    return 0;
}

std::optional<Statements> Statements::parseStatement(const std::string& s) {
        Statements ret;
        ret.statementString = s;
        if (s.starts_with("insert"))
            ret.m_type = StatementType::INSERT;
        else if (s.starts_with("select"))
            ret.m_type = StatementType::SELECT;
        else
            return std::nullopt;
        return std::make_optional<Statements>(ret);
    }