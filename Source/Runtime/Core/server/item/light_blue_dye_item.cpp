
#include "light_blue_dye_item.h"

LightBlueDyeItem::LightBlueDyeItem() = default;
LightBlueDyeItem::~LightBlueDyeItem() = default;

int LightBlueDyeItem::getID() const {
  return 852;
}

std::shared_ptr<Item> LightBlueDyeItem::clone() const {
  return std::make_shared<LightBlueDyeItem>();
}
