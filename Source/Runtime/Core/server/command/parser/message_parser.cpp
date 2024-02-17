
#include "message_parser.h"

MessageParser::MessageParser() = default;
MessageParser::~MessageParser() = default;

int MessageParser::getID() const {
  return 18;
}

std::string MessageParser::getIdentifier() const {
  return "minecraft:message";
}

void MessageParser::writeProperties(ByteBuffer &) const {}