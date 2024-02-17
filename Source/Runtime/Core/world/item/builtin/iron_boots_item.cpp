
#include "iron_boots_item.h"

IronBootsItem::IronBootsItem() = default;
IronBootsItem::~IronBootsItem() = default;

int IronBootsItem::getID() const {
  return 785;
}

std::shared_ptr<Item> IronBootsItem::clone() const {
  return std::make_shared<IronBootsItem>();
}
