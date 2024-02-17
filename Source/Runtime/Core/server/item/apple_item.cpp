
#include "apple_item.h"

AppleItem::AppleItem() = default;
AppleItem::~AppleItem() = default;

int AppleItem::getID() const {
  return 717;
}

std::shared_ptr<Item> AppleItem::clone() const {
  return std::make_shared<AppleItem>();
}
