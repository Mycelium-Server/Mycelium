
#include "spruce_chest_boat_item.h"

SpruceChestBoatItem::SpruceChestBoatItem() = default;
SpruceChestBoatItem::~SpruceChestBoatItem() = default;

int SpruceChestBoatItem::getID() const {
  return 701;
}

std::shared_ptr<Item> SpruceChestBoatItem::clone() const {
  return std::make_shared<SpruceChestBoatItem>();
}
