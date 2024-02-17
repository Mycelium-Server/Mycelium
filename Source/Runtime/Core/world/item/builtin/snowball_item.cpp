
#include "snowball_item.h"

SnowballItem::SnowballItem() = default;
SnowballItem::~SnowballItem() = default;

int SnowballItem::getID() const {
  return 817;
}

std::shared_ptr<Item> SnowballItem::clone() const {
  return std::make_shared<SnowballItem>();
}
