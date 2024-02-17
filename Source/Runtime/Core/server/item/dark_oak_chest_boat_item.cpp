
#include "dark_oak_chest_boat_item.h"

DarkOakChestBoatItem::DarkOakChestBoatItem() = default;
DarkOakChestBoatItem::~DarkOakChestBoatItem() = default;

int DarkOakChestBoatItem::getID() const {
  return 709;
}

std::shared_ptr<Item> DarkOakChestBoatItem::clone() const {
  return std::make_shared<DarkOakChestBoatItem>();
}
