
#include "birch_boat_item.h"

BirchBoatItem::BirchBoatItem() = default;
BirchBoatItem::~BirchBoatItem() = default;

int BirchBoatItem::getID() const {
  return 702;
}

std::shared_ptr<Item> BirchBoatItem::clone() const {
  return std::make_shared<BirchBoatItem>();
}
