
#include "jungle_chest_boat_item.h"

JungleChestBoatItem::JungleChestBoatItem() = default;
JungleChestBoatItem::~JungleChestBoatItem() = default;

int JungleChestBoatItem::getID() const {
  return 705;
}

std::shared_ptr<Item> JungleChestBoatItem::clone() const {
  return std::make_shared<JungleChestBoatItem>();
}
