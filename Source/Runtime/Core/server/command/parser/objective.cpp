
#include "objective.h"

ObjectiveParser::ObjectiveParser() = default;
ObjectiveParser::~ObjectiveParser() = default;

int ObjectiveParser::getID() const {
  return 22;
}

std::string ObjectiveParser::getIdentifier() const {
  return "minecraft:objective";
}

void ObjectiveParser::writeProperties(ByteBuffer &) const {}