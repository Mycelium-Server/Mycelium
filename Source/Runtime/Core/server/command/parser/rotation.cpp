
#include "rotation.h"

RotationParser::RotationParser() = default;
RotationParser::~RotationParser() = default;

int RotationParser::getID() const {
  return 27;
}

std::string RotationParser::getIdentifier() const {
  return "minecraft:rotation";
}

void RotationParser::writeProperties(ByteBuffer &) const {}