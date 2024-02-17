
#include "heart_of_the_sea_item.h"

HeartOfTheSeaItem::HeartOfTheSeaItem() = default;
HeartOfTheSeaItem::~HeartOfTheSeaItem() = default;

int HeartOfTheSeaItem::getID() const {
  return 1077;
}

std::shared_ptr<Item> HeartOfTheSeaItem::clone() const {
  return std::make_shared<HeartOfTheSeaItem>();
}
