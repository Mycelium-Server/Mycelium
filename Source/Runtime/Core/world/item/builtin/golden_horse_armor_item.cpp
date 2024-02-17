
#include "golden_horse_armor_item.h"

GoldenHorseArmorItem::GoldenHorseArmorItem() = default;
GoldenHorseArmorItem::~GoldenHorseArmorItem() = default;

int GoldenHorseArmorItem::getID() const {
  return 1017;
}

std::shared_ptr<Item> GoldenHorseArmorItem::clone() const {
  return std::make_shared<GoldenHorseArmorItem>();
}
