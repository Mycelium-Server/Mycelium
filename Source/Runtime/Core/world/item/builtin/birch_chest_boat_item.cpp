
#include "birch_chest_boat_item.h"

BirchChestBoatItem::BirchChestBoatItem() = default;
BirchChestBoatItem::~BirchChestBoatItem() = default;

int BirchChestBoatItem::getID() const {
  return 703;
}

std::shared_ptr<Item> BirchChestBoatItem::clone() const {
  return std::make_shared<BirchChestBoatItem>();
}
