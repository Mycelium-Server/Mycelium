
#include "iron_ingot_item.h"

IronIngotItem::IronIngotItem() = default;
IronIngotItem::~IronIngotItem() = default;

int IronIngotItem::getID() const {
  return 728;
}

std::shared_ptr<Item> IronIngotItem::clone() const {
  return std::make_shared<IronIngotItem>();
}
