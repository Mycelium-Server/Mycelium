
#include "brigadier_string.h"

BrigadierStringParser::BrigadierStringParser() = default;
BrigadierStringParser::~BrigadierStringParser() = default;

int BrigadierStringParser::getID() const {
  return 5;
}

std::string BrigadierStringParser::getIdentifier() const {
  return "brigadier:string";
}

void BrigadierStringParser::writeProperties(ByteBuffer& buf) const {
  buf.writeVarInt((int) type);
}
