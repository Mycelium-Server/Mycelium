
#include "item_slot.h"

ItemSlotParser::ItemSlotParser() = default;
ItemSlotParser::~ItemSlotParser() = default;

int ItemSlotParser::getID() const {
  return 32;
}

std::string ItemSlotParser::getIdentifier() const {
  return "minecraft:item_slot";
}

void ItemSlotParser::writeProperties(ByteBuffer &) const {}