
#include "diamond_pickaxe_item.h"

DiamondPickaxeItem::DiamondPickaxeItem() = default;
DiamondPickaxeItem::~DiamondPickaxeItem() = default;

int DiamondPickaxeItem::getID() const {
  return 757;
}

std::shared_ptr<Item> DiamondPickaxeItem::clone() const {
  return std::make_shared<DiamondPickaxeItem>();
}
