
#include "purple_dye_item.h"

PurpleDyeItem::PurpleDyeItem() = default;
PurpleDyeItem::~PurpleDyeItem() = default;

int PurpleDyeItem::getID() const {
  return 859;
}

std::shared_ptr<Item> PurpleDyeItem::clone() const {
  return std::make_shared<PurpleDyeItem>();
}
