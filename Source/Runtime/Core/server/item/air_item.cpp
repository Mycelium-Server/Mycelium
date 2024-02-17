
#include "air_item.h"

AirItem::AirItem() = default;
AirItem::~AirItem() = default;

int AirItem::getID() const {
  return 0;
}

std::shared_ptr<Item> AirItem::clone() const {
  return std::make_shared<AirItem>();
}
