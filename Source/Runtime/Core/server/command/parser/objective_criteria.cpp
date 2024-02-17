
#include "objective_criteria.h"

ObjectiveCriteriaParser::ObjectiveCriteriaParser() = default;
ObjectiveCriteriaParser::~ObjectiveCriteriaParser() = default;

int ObjectiveCriteriaParser::getID() const {
  return 23;
}

std::string ObjectiveCriteriaParser::getIdentifier() const {
  return "minecraft:objective_criteria";
}

void ObjectiveCriteriaParser::writeProperties(ByteBuffer &) const {}