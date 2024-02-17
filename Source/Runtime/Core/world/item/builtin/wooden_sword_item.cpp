
#include "wooden_sword_item.h"

WoodenSwordItem::WoodenSwordItem() = default;
WoodenSwordItem::~WoodenSwordItem() = default;

int WoodenSwordItem::getID() const {
  return 735;
}

std::shared_ptr<Item> WoodenSwordItem::clone() const {
  return std::make_shared<WoodenSwordItem>();
}
