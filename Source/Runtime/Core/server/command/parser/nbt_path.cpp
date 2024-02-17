
#include "nbt_path.h"

NbtPathParser::NbtPathParser() = default;
NbtPathParser::~NbtPathParser() = default;

int NbtPathParser::getID() const {
  return 21;
}

std::string NbtPathParser::getIdentifier() const {
  return "minecraft:nbt_path";
}

void NbtPathParser::writeProperties(ByteBuffer &) const {}