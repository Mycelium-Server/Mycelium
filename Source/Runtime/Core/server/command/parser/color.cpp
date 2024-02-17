
#include "color.h"

ColorParser::ColorParser() = default;
ColorParser::~ColorParser() = default;

int ColorParser::getID() const {
  return 18;
}

std::string ColorParser::getIdentifier() const {
  return "minecraft:color";
}

void ColorParser::writeProperties(ByteBuffer &) const {}