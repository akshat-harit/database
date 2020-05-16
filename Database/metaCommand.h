#pragma once
#include <string>
#include <optional>
enum class MetaCommandType {
    META_COMMAND_EXIT,
};


class MetaCommand
{
public:
    MetaCommandType m_type;
    std::string m_MetaCommandString;
    int executeMetaComand();
    static std::optional<MetaCommand> parseMetaCommand(const std::string& input);
};

