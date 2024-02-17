
#include "clock_item.h"

ClockItem::ClockItem() = default;
ClockItem::~ClockItem() = default;

int ClockItem::getID() const {
  return 837;
}

std::shared_ptr<Item> ClockItem::clone() const {
  return std::make_shared<ClockItem>();
}
