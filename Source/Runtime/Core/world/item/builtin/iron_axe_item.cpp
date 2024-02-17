
#include "iron_axe_item.h"

IronAxeItem::IronAxeItem() = default;
IronAxeItem::~IronAxeItem() = default;

int IronAxeItem::getID() const {
  return 753;
}

std::shared_ptr<Item> IronAxeItem::clone() const {
  return std::make_shared<IronAxeItem>();
}
