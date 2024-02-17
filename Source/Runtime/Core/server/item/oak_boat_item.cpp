
#include "oak_boat_item.h"

OakBoatItem::OakBoatItem() = default;
OakBoatItem::~OakBoatItem() = default;

int OakBoatItem::getID() const {
  return 698;
}

std::shared_ptr<Item> OakBoatItem::clone() const {
  return std::make_shared<OakBoatItem>();
}
