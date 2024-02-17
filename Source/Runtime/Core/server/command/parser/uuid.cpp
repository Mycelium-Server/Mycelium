
#include "uuid.h"

UuidParser::UuidParser() = default;
UuidParser::~UuidParser() = default;

int UuidParser::getID() const {
  return 47;
}

std::string UuidParser::getIdentifier() const {
  return "minecraft:uuid";
}

void UuidParser::writeProperties(ByteBuffer &) const {}
