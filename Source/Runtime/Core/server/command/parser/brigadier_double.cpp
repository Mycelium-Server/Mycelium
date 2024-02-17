
#include "brigadier_double.h"

BrigadierDoubleParser::BrigadierDoubleParser() = default;
BrigadierDoubleParser::~BrigadierDoubleParser() = default;

int BrigadierDoubleParser::getID() const {
  return 2;
}

std::string BrigadierDoubleParser::getIdentifier() const {
  return "brigadier:double";
}

void BrigadierDoubleParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte(((uint8_t) min.has_value()) |
                ((uint8_t) max.has_value()) << 1);
  if (min.has_value()) {
    buf.writeDouble(min.value());
  }
  if (max.has_value()) {
    buf.writeDouble(max.value());
  }
}