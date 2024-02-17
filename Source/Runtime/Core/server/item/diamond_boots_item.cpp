
#include "diamond_boots_item.h"

DiamondBootsItem::DiamondBootsItem() = default;
DiamondBootsItem::~DiamondBootsItem() = default;

int DiamondBootsItem::getID() const {
  return 789;
}

std::shared_ptr<Item> DiamondBootsItem::clone() const {
  return std::make_shared<DiamondBootsItem>();
}
