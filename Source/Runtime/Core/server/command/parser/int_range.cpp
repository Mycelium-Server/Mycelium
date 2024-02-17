
#include "int_range.h"

IntRangeParser::IntRangeParser() = default;
IntRangeParser::~IntRangeParser() = default;

int IntRangeParser::getID() const {
  return 37;
}

std::string IntRangeParser::getIdentifier() const {
  return "minecraft:int_range";
}

void IntRangeParser::writeProperties(ByteBuffer &) const {}