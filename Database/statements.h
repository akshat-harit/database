#pragma once
#include <string>
#include <optional>

enum class StatementType {
    INSERT,
    SELECT
};

class Statements
{
public:
    StatementType m_type;
    std::string statementString;
    int exectuteStaement();

    static std::optional<Statements> parseStatement(const std::string& s);
};



