
#include "black_dye_item.h"

BlackDyeItem::BlackDyeItem() = default;
BlackDyeItem::~BlackDyeItem() = default;

int BlackDyeItem::getID() const {
  return 864;
}

std::shared_ptr<Item> BlackDyeItem::clone() const {
  return std::make_shared<BlackDyeItem>();
}
