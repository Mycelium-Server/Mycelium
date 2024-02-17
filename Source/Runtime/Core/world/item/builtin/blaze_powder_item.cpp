
#include "blaze_powder_item.h"

BlazePowderItem::BlazePowderItem() = default;
BlazePowderItem::~BlazePowderItem() = default;

int BlazePowderItem::getID() const {
  return 906;
}

std::shared_ptr<Item> BlazePowderItem::clone() const {
  return std::make_shared<BlazePowderItem>();
}
