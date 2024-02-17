
#include "compass_item.h"

CompassItem::CompassItem() = default;
CompassItem::~CompassItem() = default;

int CompassItem::getID() const {
  return 833;
}

std::shared_ptr<Item> CompassItem::clone() const {
  return std::make_shared<CompassItem>();
}
