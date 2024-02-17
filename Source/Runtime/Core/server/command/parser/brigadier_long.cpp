
#include "brigadier_long.h"

BrigadierLongParser::BrigadierLongParser() = default;
BrigadierLongParser::~BrigadierLongParser() = default;

int BrigadierLongParser::getID() const {
  return 4;
}

std::string BrigadierLongParser::getIdentifier() const {
  return "brigadier:long";
}

void BrigadierLongParser::writeProperties(ByteBuffer& buf) const {
  buf.writeByte(((uint8_t) min.has_value()) |
                ((uint8_t) max.has_value()) << 1);
  if (min.has_value()) {
    buf.writeLong(min.value());
  }
  if (max.has_value()) {
    buf.writeLong(max.value());
  }
}
