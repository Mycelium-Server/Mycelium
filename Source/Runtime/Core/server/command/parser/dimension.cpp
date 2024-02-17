
#include "dimension.h"

DimensionParser::DimensionParser() = default;
DimensionParser::~DimensionParser() = default;

int DimensionParser::getID() const {
  return 41;
}

std::string DimensionParser::getIdentifier() const {
  return "minecraft:dimension";
}

void DimensionParser::writeProperties(ByteBuffer &) const {}