
#include "mushroom_stew_item.h"

MushroomStewItem::MushroomStewItem() = default;
MushroomStewItem::~MushroomStewItem() = default;

int MushroomStewItem::getID() const {
  return 767;
}

std::shared_ptr<Item> MushroomStewItem::clone() const {
  return std::make_shared<MushroomStewItem>();
}
