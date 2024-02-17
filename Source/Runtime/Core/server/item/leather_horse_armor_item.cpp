
#include "leather_horse_armor_item.h"

LeatherHorseArmorItem::LeatherHorseArmorItem() = default;
LeatherHorseArmorItem::~LeatherHorseArmorItem() = default;

int LeatherHorseArmorItem::getID() const {
  return 1019;
}

std::shared_ptr<Item> LeatherHorseArmorItem::clone() const {
  return std::make_shared<LeatherHorseArmorItem>();
}
