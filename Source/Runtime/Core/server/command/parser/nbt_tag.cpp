
#include "nbt_tag.h"

NbtTagParser::NbtTagParser() = default;
NbtTagParser::~NbtTagParser() = default;

int NbtTagParser::getID() const {
  return 20;
}

std::string NbtTagParser::getIdentifier() const {
  return "minecraft:nbt_tag";
}

void NbtTagParser::writeProperties(ByteBuffer &) const {}