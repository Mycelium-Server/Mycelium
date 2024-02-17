
#include "diamond_leggings_item.h"

DiamondLeggingsItem::DiamondLeggingsItem() = default;
DiamondLeggingsItem::~DiamondLeggingsItem() = default;

int DiamondLeggingsItem::getID() const {
  return 788;
}

std::shared_ptr<Item> DiamondLeggingsItem::clone() const {
  return std::make_shared<DiamondLeggingsItem>();
}
