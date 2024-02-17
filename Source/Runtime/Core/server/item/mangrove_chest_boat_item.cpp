
#include "mangrove_chest_boat_item.h"

MangroveChestBoatItem::MangroveChestBoatItem() = default;
MangroveChestBoatItem::~MangroveChestBoatItem() = default;

int MangroveChestBoatItem::getID() const {
  return 711;
}

std::shared_ptr<Item> MangroveChestBoatItem::clone() const {
  return std::make_shared<MangroveChestBoatItem>();
}
