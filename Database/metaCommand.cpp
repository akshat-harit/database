#include "metaCommand.h"
#include <cstdlib>

int MetaCommand::executeMetaComand()
{
    switch(m_type) {
    case MetaCommandType::META_COMMAND_EXIT: std::exit(EXIT_SUCCESS); break;
    }
    return -1;
}

std::optional<MetaCommand> MetaCommand::parseMetaCommand(const std::string& input) {
    MetaCommand ret;
    if (input == ".exit")
        ret.m_type = MetaCommandType::META_COMMAND_EXIT;
    else
        return std::nullopt;
    return ret;
}
