
#include "diamond_horse_armor_item.h"

DiamondHorseArmorItem::DiamondHorseArmorItem() = default;
DiamondHorseArmorItem::~DiamondHorseArmorItem() = default;

int DiamondHorseArmorItem::getID() const {
  return 1018;
}

std::shared_ptr<Item> DiamondHorseArmorItem::clone() const {
  return std::make_shared<DiamondHorseArmorItem>();
}
