
#include "item_stack.h"

ItemStackParser::ItemStackParser() = default;
ItemStackParser::~ItemStackParser() = default;

int ItemStackParser::getID() const {
  return 14;
}

std::string ItemStackParser::getIdentifier() const {
  return "minecraft:item_stack";
}

void ItemStackParser::writeProperties(ByteBuffer &) const {}
