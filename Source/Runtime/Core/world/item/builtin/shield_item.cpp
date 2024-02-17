
#include "shield_item.h"

ShieldItem::ShieldItem() = default;
ShieldItem::~ShieldItem() = default;

int ShieldItem::getID() const {
  return 1052;
}

std::shared_ptr<Item> ShieldItem::clone() const {
  return std::make_shared<ShieldItem>();
}
