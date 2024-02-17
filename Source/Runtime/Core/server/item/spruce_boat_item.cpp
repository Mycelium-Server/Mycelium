
#include "spruce_boat_item.h"

SpruceBoatItem::SpruceBoatItem() = default;
SpruceBoatItem::~SpruceBoatItem() = default;

int SpruceBoatItem::getID() const {
  return 700;
}

std::shared_ptr<Item> SpruceBoatItem::clone() const {
  return std::make_shared<SpruceBoatItem>();
}
