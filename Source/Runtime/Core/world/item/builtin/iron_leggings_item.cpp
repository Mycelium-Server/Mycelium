
#include "iron_leggings_item.h"

IronLeggingsItem::IronLeggingsItem() = default;
IronLeggingsItem::~IronLeggingsItem() = default;

int IronLeggingsItem::getID() const {
  return 784;
}

std::shared_ptr<Item> IronLeggingsItem::clone() const {
  return std::make_shared<IronLeggingsItem>();
}
