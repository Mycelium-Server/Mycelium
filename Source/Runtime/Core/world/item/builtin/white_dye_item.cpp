
#include "white_dye_item.h"

WhiteDyeItem::WhiteDyeItem() = default;
WhiteDyeItem::~WhiteDyeItem() = default;

int WhiteDyeItem::getID() const {
  return 849;
}

std::shared_ptr<Item> WhiteDyeItem::clone() const {
  return std::make_shared<WhiteDyeItem>();
}
