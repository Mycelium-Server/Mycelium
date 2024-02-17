
#include "raw_iron_item.h"

RawIronItem::RawIronItem() = default;
RawIronItem::~RawIronItem() = default;

int RawIronItem::getID() const {
  return 727;
}

std::shared_ptr<Item> RawIronItem::clone() const {
  return std::make_shared<RawIronItem>();
}
