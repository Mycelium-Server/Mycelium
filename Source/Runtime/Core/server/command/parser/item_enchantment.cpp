
#include "item_enchantment.h"

ItemEnchantmentParser::ItemEnchantmentParser() = default;
ItemEnchantmentParser::~ItemEnchantmentParser() = default;

int ItemEnchantmentParser::getID() const {
  return 39;
}

std::string ItemEnchantmentParser::getIdentifier() const {
  return "minecraft:item_enchantment";
}

void ItemEnchantmentParser::writeProperties(ByteBuffer &) const {}
