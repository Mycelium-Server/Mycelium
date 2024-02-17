
#include "feather_item.h"

FeatherItem::FeatherItem() = default;
FeatherItem::~FeatherItem() = default;

int FeatherItem::getID() const {
  return 769;
}

std::shared_ptr<Item> FeatherItem::clone() const {
  return std::make_shared<FeatherItem>();
}
