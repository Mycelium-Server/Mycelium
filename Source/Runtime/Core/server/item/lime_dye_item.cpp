
#include "lime_dye_item.h"

LimeDyeItem::LimeDyeItem() = default;
LimeDyeItem::~LimeDyeItem() = default;

int LimeDyeItem::getID() const {
  return 854;
}

std::shared_ptr<Item> LimeDyeItem::clone() const {
  return std::make_shared<LimeDyeItem>();
}
