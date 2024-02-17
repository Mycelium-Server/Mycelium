
#include "iron_sword_item.h"

IronSwordItem::IronSwordItem() = default;
IronSwordItem::~IronSwordItem() = default;

int IronSwordItem::getID() const {
  return 750;
}

std::shared_ptr<Item> IronSwordItem::clone() const {
  return std::make_shared<IronSwordItem>();
}
