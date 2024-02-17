
#include "brigadier_float.h"

BrigadierFloatParser::BrigadierFloatParser() = default;
BrigadierFloatParser::~BrigadierFloatParser() = default;

int BrigadierFloatParser::getID() const {
  return 1;
}

std::string BrigadierFloatParser::getIdentifier() const {
  return "brigadier:float";
}

void BrigadierFloatParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte(((uint8_t) min.has_value()) |
                ((uint8_t) max.has_value()) << 1);
  if (min.has_value()) {
    buf.writeFloat(min.value());
  }
  if (max.has_value()) {
    buf.writeFloat(max.value());
  }
}
