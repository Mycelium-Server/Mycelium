
#include "leather_helmet_item.h"

LeatherHelmetItem::LeatherHelmetItem() = default;
LeatherHelmetItem::~LeatherHelmetItem() = default;

int LeatherHelmetItem::getID() const {
  return 774;
}

std::shared_ptr<Item> LeatherHelmetItem::clone() const {
  return std::make_shared<LeatherHelmetItem>();
}
