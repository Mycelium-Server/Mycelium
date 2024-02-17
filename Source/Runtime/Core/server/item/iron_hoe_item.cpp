
#include "iron_hoe_item.h"

IronHoeItem::IronHoeItem() = default;
IronHoeItem::~IronHoeItem() = default;

int IronHoeItem::getID() const {
  return 754;
}

std::shared_ptr<Item> IronHoeItem::clone() const {
  return std::make_shared<IronHoeItem>();
}
