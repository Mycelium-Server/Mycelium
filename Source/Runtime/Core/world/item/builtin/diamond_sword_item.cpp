
#include "diamond_sword_item.h"

DiamondSwordItem::DiamondSwordItem() = default;
DiamondSwordItem::~DiamondSwordItem() = default;

int DiamondSwordItem::getID() const {
  return 755;
}

std::shared_ptr<Item> DiamondSwordItem::clone() const {
  return std::make_shared<DiamondSwordItem>();
}
