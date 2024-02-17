
#include "arrow_item.h"

ArrowItem::ArrowItem() = default;
ArrowItem::~ArrowItem() = default;

int ArrowItem::getID() const {
  return 719;
}

std::shared_ptr<Item> ArrowItem::clone() const {
  return std::make_shared<ArrowItem>();
}
