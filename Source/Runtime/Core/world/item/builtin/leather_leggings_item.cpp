
#include "leather_leggings_item.h"

LeatherLeggingsItem::LeatherLeggingsItem() = default;
LeatherLeggingsItem::~LeatherLeggingsItem() = default;

int LeatherLeggingsItem::getID() const {
  return 776;
}

std::shared_ptr<Item> LeatherLeggingsItem::clone() const {
  return std::make_shared<LeatherLeggingsItem>();
}
