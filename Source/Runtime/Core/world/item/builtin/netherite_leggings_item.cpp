
#include "netherite_leggings_item.h"

NetheriteLeggingsItem::NetheriteLeggingsItem() = default;
NetheriteLeggingsItem::~NetheriteLeggingsItem() = default;

int NetheriteLeggingsItem::getID() const {
  return 796;
}

std::shared_ptr<Item> NetheriteLeggingsItem::clone() const {
  return std::make_shared<NetheriteLeggingsItem>();
}
