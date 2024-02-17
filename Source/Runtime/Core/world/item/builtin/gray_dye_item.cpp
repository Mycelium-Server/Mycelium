
#include "gray_dye_item.h"

GrayDyeItem::GrayDyeItem() = default;
GrayDyeItem::~GrayDyeItem() = default;

int GrayDyeItem::getID() const {
  return 856;
}

std::shared_ptr<Item> GrayDyeItem::clone() const {
  return std::make_shared<GrayDyeItem>();
}
