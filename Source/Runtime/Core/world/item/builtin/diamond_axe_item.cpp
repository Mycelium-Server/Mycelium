
#include "diamond_axe_item.h"

DiamondAxeItem::DiamondAxeItem() = default;
DiamondAxeItem::~DiamondAxeItem() = default;

int DiamondAxeItem::getID() const {
  return 758;
}

std::shared_ptr<Item> DiamondAxeItem::clone() const {
  return std::make_shared<DiamondAxeItem>();
}
