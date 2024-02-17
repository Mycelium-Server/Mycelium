
#include "iron_helmet_item.h"

IronHelmetItem::IronHelmetItem() = default;
IronHelmetItem::~IronHelmetItem() = default;

int IronHelmetItem::getID() const {
  return 782;
}

std::shared_ptr<Item> IronHelmetItem::clone() const {
  return std::make_shared<IronHelmetItem>();
}
