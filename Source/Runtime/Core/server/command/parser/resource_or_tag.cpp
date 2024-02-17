
#include "resource_or_tag.h"

ResourceOrTagParser::ResourceOrTagParser() = default;
ResourceOrTagParser::~ResourceOrTagParser() = default;

int ResourceOrTagParser::getID() const {
  return 43;
}

std::string ResourceOrTagParser::getIdentifier() const {
  return "minecraft:resource_or_tag";
}

void ResourceOrTagParser::writeProperties(ByteBuffer& buf) const {
  buf.writeString(registry);
}
