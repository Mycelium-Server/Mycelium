
#include "acacia_boat_item.h"

AcaciaBoatItem::AcaciaBoatItem() = default;
AcaciaBoatItem::~AcaciaBoatItem() = default;

int AcaciaBoatItem::getID() const {
  return 706;
}

std::shared_ptr<Item> AcaciaBoatItem::clone() const {
  return std::make_shared<AcaciaBoatItem>();
}
