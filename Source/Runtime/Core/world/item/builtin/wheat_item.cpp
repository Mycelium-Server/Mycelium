
#include "wheat_item.h"

WheatItem::WheatItem() = default;
WheatItem::~WheatItem() = default;

int WheatItem::getID() const {
  return 772;
}

std::shared_ptr<Item> WheatItem::clone() const {
  return std::make_shared<WheatItem>();
}
