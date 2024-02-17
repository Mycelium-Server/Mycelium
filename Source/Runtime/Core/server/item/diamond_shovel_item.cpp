
#include "diamond_shovel_item.h"

DiamondShovelItem::DiamondShovelItem() = default;
DiamondShovelItem::~DiamondShovelItem() = default;

int DiamondShovelItem::getID() const {
  return 756;
}

std::shared_ptr<Item> DiamondShovelItem::clone() const {
  return std::make_shared<DiamondShovelItem>();
}
