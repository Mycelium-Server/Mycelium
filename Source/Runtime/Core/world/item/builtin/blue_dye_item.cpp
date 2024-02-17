
#include "blue_dye_item.h"

BlueDyeItem::BlueDyeItem() = default;
BlueDyeItem::~BlueDyeItem() = default;

int BlueDyeItem::getID() const {
  return 860;
}

std::shared_ptr<Item> BlueDyeItem::clone() const {
  return std::make_shared<BlueDyeItem>();
}
