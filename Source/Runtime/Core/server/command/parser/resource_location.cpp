
#include "resource_location.h"

ResourceLocationParser::ResourceLocationParser() = default;
ResourceLocationParser::~ResourceLocationParser() = default;

int ResourceLocationParser::getID() const {
  return 33;
}

std::string ResourceLocationParser::getIdentifier() const {
  return "minecraft:resource_location";
}

void ResourceLocationParser::writeProperties(ByteBuffer &) const {}