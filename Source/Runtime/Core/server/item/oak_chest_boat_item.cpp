
#include "oak_chest_boat_item.h"

OakChestBoatItem::OakChestBoatItem() = default;
OakChestBoatItem::~OakChestBoatItem() = default;

int OakChestBoatItem::getID() const {
  return 699;
}

std::shared_ptr<Item> OakChestBoatItem::clone() const {
  return std::make_shared<OakChestBoatItem>();
}
