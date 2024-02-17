
#include "light_gray_dye_item.h"

LightGrayDyeItem::LightGrayDyeItem() = default;
LightGrayDyeItem::~LightGrayDyeItem() = default;

int LightGrayDyeItem::getID() const {
  return 857;
}

std::shared_ptr<Item> LightGrayDyeItem::clone() const {
  return std::make_shared<LightGrayDyeItem>();
}
