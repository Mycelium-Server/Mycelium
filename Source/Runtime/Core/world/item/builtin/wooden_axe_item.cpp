
#include "wooden_axe_item.h"

WoodenAxeItem::WoodenAxeItem() = default;
WoodenAxeItem::~WoodenAxeItem() = default;

int WoodenAxeItem::getID() const {
  return 738;
}

std::shared_ptr<Item> WoodenAxeItem::clone() const {
  return std::make_shared<WoodenAxeItem>();
}
