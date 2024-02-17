
#include "diamond_hoe_item.h"

DiamondHoeItem::DiamondHoeItem() = default;
DiamondHoeItem::~DiamondHoeItem() = default;

int DiamondHoeItem::getID() const {
  return 759;
}

std::shared_ptr<Item> DiamondHoeItem::clone() const {
  return std::make_shared<DiamondHoeItem>();
}
