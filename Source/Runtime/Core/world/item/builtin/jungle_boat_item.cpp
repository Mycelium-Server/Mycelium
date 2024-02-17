
#include "jungle_boat_item.h"

JungleBoatItem::JungleBoatItem() = default;
JungleBoatItem::~JungleBoatItem() = default;

int JungleBoatItem::getID() const {
  return 704;
}

std::shared_ptr<Item> JungleBoatItem::clone() const {
  return std::make_shared<JungleBoatItem>();
}
