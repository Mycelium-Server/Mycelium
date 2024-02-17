
#include "honeycomb_item.h"

HoneycombItem::HoneycombItem() = default;
HoneycombItem::~HoneycombItem() = default;

int HoneycombItem::getID() const {
  return 1105;
}

std::shared_ptr<Item> HoneycombItem::clone() const {
  return std::make_shared<HoneycombItem>();
}
