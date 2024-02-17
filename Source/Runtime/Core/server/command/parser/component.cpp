
#include "component.h"

ComponentParser::ComponentParser() = default;
ComponentParser::~ComponentParser() = default;

int ComponentParser::getID() const {
  return 17;
}

std::string ComponentParser::getIdentifier() const {
  return "minecraft:component";
}

void ComponentParser::writeProperties(ByteBuffer &) const {}