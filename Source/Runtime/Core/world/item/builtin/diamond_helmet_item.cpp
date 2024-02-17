
#include "diamond_helmet_item.h"

DiamondHelmetItem::DiamondHelmetItem() = default;
DiamondHelmetItem::~DiamondHelmetItem() = default;

int DiamondHelmetItem::getID() const {
  return 786;
}

std::shared_ptr<Item> DiamondHelmetItem::clone() const {
  return std::make_shared<DiamondHelmetItem>();
}
