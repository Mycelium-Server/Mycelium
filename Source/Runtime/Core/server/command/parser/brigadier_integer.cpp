
#include "brigadier_integer.h"

BrigadierIntegerParser::BrigadierIntegerParser() = default;
BrigadierIntegerParser::~BrigadierIntegerParser() = default;

int BrigadierIntegerParser::getID() const {
  return 3;
}

std::string BrigadierIntegerParser::getIdentifier() const {
  return "brigadier:integer";
}

void BrigadierIntegerParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte(((uint8_t) min.has_value()) |
                ((uint8_t) max.has_value()) << 1);
  if (min.has_value()) {
    buf.writeInt(min.value());
  }
  if (max.has_value()) {
    buf.writeInt(max.value());
  }
}