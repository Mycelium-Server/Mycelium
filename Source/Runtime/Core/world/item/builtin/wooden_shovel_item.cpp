
#include "wooden_shovel_item.h"

WoodenShovelItem::WoodenShovelItem() = default;
WoodenShovelItem::~WoodenShovelItem() = default;

int WoodenShovelItem::getID() const {
  return 736;
}

std::shared_ptr<Item> WoodenShovelItem::clone() const {
  return std::make_shared<WoodenShovelItem>();
}
