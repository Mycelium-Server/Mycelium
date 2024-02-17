
#include "goat_horn_item.h"

GoatHornItem::GoatHornItem() = default;
GoatHornItem::~GoatHornItem() = default;

int GoatHornItem::getID() const {
  return 1087;
}

std::shared_ptr<Item> GoatHornItem::clone() const {
  return std::make_shared<GoatHornItem>();
}
