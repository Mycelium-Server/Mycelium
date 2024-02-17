
#include "iron_horse_armor_item.h"

IronHorseArmorItem::IronHorseArmorItem() = default;
IronHorseArmorItem::~IronHorseArmorItem() = default;

int IronHorseArmorItem::getID() const {
  return 1016;
}

std::shared_ptr<Item> IronHorseArmorItem::clone() const {
  return std::make_shared<IronHorseArmorItem>();
}
