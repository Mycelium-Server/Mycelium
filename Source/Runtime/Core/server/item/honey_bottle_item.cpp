
#include "honey_bottle_item.h"

HoneyBottleItem::HoneyBottleItem() = default;
HoneyBottleItem::~HoneyBottleItem() = default;

int HoneyBottleItem::getID() const {
  return 1108;
}

std::shared_ptr<Item> HoneyBottleItem::clone() const {
  return std::make_shared<HoneyBottleItem>();
}
