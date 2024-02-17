
#include "leather_item.h"

LeatherItem::LeatherItem() = default;
LeatherItem::~LeatherItem() = default;

int LeatherItem::getID() const {
  return 818;
}

std::shared_ptr<Item> LeatherItem::clone() const {
  return std::make_shared<LeatherItem>();
}
