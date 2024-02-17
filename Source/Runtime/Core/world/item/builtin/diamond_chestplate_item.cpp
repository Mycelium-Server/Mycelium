
#include "diamond_chestplate_item.h"

DiamondChestplateItem::DiamondChestplateItem() = default;
DiamondChestplateItem::~DiamondChestplateItem() = default;

int DiamondChestplateItem::getID() const {
  return 787;
}

std::shared_ptr<Item> DiamondChestplateItem::clone() const {
  return std::make_shared<DiamondChestplateItem>();
}
