
#include "yellow_dye_item.h"

YellowDyeItem::YellowDyeItem() = default;
YellowDyeItem::~YellowDyeItem() = default;

int YellowDyeItem::getID() const {
  return 853;
}

std::shared_ptr<Item> YellowDyeItem::clone() const {
  return std::make_shared<YellowDyeItem>();
}
