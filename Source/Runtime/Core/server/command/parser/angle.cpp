
#include "angle.h"

AngleParser::AngleParser() = default;
AngleParser::~AngleParser() = default;

int AngleParser::getID() const {
  return 26;
}

std::string AngleParser::getIdentifier() const {
  return "minecraft:angle";
}

void AngleParser::writeProperties(ByteBuffer &) const {}