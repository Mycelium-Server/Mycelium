
#include "flint_item.h"

FlintItem::FlintItem() = default;
FlintItem::~FlintItem() = default;

int FlintItem::getID() const {
  return 798;
}

std::shared_ptr<Item> FlintItem::clone() const {
  return std::make_shared<FlintItem>();
}
