
#include "map_item.h"

MapItem::MapItem() = default;
MapItem::~MapItem() = default;

int MapItem::getID() const {
  return 994;
}

std::shared_ptr<Item> MapItem::clone() const {
  return std::make_shared<MapItem>();
}
