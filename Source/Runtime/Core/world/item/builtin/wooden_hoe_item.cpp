
#include "wooden_hoe_item.h"

WoodenHoeItem::WoodenHoeItem() = default;
WoodenHoeItem::~WoodenHoeItem() = default;

int WoodenHoeItem::getID() const {
  return 739;
}

std::shared_ptr<Item> WoodenHoeItem::clone() const {
  return std::make_shared<WoodenHoeItem>();
}
