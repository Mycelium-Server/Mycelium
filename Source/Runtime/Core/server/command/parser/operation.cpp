
#include "operation.h"

OperationParser::OperationParser() = default;
OperationParser::~OperationParser() = default;

int OperationParser::getID() const {
  return 24;
}

std::string OperationParser::getIdentifier() const {
  return "minecraft:operation";
}

void OperationParser::writeProperties(ByteBuffer &) const {}