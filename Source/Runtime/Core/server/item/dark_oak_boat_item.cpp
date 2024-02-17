
#include "dark_oak_boat_item.h"

DarkOakBoatItem::DarkOakBoatItem() = default;
DarkOakBoatItem::~DarkOakBoatItem() = default;

int DarkOakBoatItem::getID() const {
  return 708;
}

std::shared_ptr<Item> DarkOakBoatItem::clone() const {
  return std::make_shared<DarkOakBoatItem>();
}
