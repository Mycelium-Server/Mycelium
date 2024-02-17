
#include "acacia_chest_boat_item.h"

AcaciaChestBoatItem::AcaciaChestBoatItem() = default;
AcaciaChestBoatItem::~AcaciaChestBoatItem() = default;

int AcaciaChestBoatItem::getID() const {
  return 707;
}

std::shared_ptr<Item> AcaciaChestBoatItem::clone() const {
  return std::make_shared<AcaciaChestBoatItem>();
}
