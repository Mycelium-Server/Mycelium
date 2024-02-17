
#include "nbt.h"

NbtParser::NbtParser() = default;
NbtParser::~NbtParser() = default;

int NbtParser::getID() const {
  return 19;
}

std::string NbtParser::getIdentifier() const {
  return "minecraft:nbt";
}

void NbtParser::writeProperties(ByteBuffer &) const {}