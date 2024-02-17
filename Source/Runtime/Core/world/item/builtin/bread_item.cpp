
#include "bread_item.h"

BreadItem::BreadItem() = default;
BreadItem::~BreadItem() = default;

int BreadItem::getID() const {
  return 773;
}

std::shared_ptr<Item> BreadItem::clone() const {
  return std::make_shared<BreadItem>();
}
