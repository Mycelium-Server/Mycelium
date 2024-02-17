
#include "armor_stand_item.h"

ArmorStandItem::ArmorStandItem() = default;
ArmorStandItem::~ArmorStandItem() = default;

int ArmorStandItem::getID() const {
  return 1015;
}

std::shared_ptr<Item> ArmorStandItem::clone() const {
  return std::make_shared<ArmorStandItem>();
}
