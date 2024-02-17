
#include "float_range.h"

FloatRange::FloatRange() = default;
FloatRange::~FloatRange() = default;

int FloatRange::getID() const {
  return 38;
}

std::string FloatRange::getIdentifier() const {
  return "minecraft:float_range";
}

void FloatRange::writeProperties(ByteBuffer &) const {}