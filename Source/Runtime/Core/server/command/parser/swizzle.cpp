
#include "swizzle.h"

SwizzleParser::SwizzleParser() = default;
SwizzleParser::~SwizzleParser() = default;

int SwizzleParser::getID() const {
  return 30;
}

std::string SwizzleParser::getIdentifier() const {
  return "minecraft:swizzle";
}

void SwizzleParser::writeProperties(ByteBuffer &) const {}