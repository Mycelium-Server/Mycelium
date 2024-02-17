
#include "resource.h"

ResourceParser::ResourceParser() = default;
ResourceParser::~ResourceParser() = default;

int ResourceParser::getID() const {
  return 43;
}

std::string ResourceParser::getIdentifier() const {
  return "minecraft:resource";
}

void ResourceParser::writeProperties(ByteBuffer& buf) const {
  buf.writeString(registry);
}
