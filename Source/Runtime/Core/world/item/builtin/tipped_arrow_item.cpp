
#include "tipped_arrow_item.h"

TippedArrowItem::TippedArrowItem() = default;
TippedArrowItem::~TippedArrowItem() = default;

int TippedArrowItem::getID() const {
  return 1050;
}

std::shared_ptr<Item> TippedArrowItem::clone() const {
  return std::make_shared<TippedArrowItem>();
}
