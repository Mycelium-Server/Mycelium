
#include "tropical_fish_item.h"

TropicalFishItem::TropicalFishItem() = default;
TropicalFishItem::~TropicalFishItem() = default;

int TropicalFishItem::getID() const {
  return 842;
}

std::shared_ptr<Item> TropicalFishItem::clone() const {
  return std::make_shared<TropicalFishItem>();
}
