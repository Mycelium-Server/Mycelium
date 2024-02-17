
#include "brick_item.h"

BrickItem::BrickItem() = default;
BrickItem::~BrickItem() = default;

int BrickItem::getID() const {
  return 826;
}

std::shared_ptr<Item> BrickItem::clone() const {
  return std::make_shared<BrickItem>();
}
