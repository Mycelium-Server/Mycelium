
#include "iron_shovel_item.h"

IronShovelItem::IronShovelItem() = default;
IronShovelItem::~IronShovelItem() = default;

int IronShovelItem::getID() const {
  return 751;
}

std::shared_ptr<Item> IronShovelItem::clone() const {
  return std::make_shared<IronShovelItem>();
}
