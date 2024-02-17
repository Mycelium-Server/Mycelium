
#include "diamond_item.h"

DiamondItem::DiamondItem() = default;
DiamondItem::~DiamondItem() = default;

int DiamondItem::getID() const {
  return 722;
}

std::shared_ptr<Item> DiamondItem::clone() const {
  return std::make_shared<DiamondItem>();
}
