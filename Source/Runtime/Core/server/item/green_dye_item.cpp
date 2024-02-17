
#include "green_dye_item.h"

GreenDyeItem::GreenDyeItem() = default;
GreenDyeItem::~GreenDyeItem() = default;

int GreenDyeItem::getID() const {
  return 862;
}

std::shared_ptr<Item> GreenDyeItem::clone() const {
  return std::make_shared<GreenDyeItem>();
}
