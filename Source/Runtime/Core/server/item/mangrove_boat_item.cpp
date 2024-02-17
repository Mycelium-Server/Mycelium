
#include "mangrove_boat_item.h"

MangroveBoatItem::MangroveBoatItem() = default;
MangroveBoatItem::~MangroveBoatItem() = default;

int MangroveBoatItem::getID() const {
  return 710;
}

std::shared_ptr<Item> MangroveBoatItem::clone() const {
  return std::make_shared<MangroveBoatItem>();
}
