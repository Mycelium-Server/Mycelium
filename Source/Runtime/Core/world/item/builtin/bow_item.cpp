
#include "bow_item.h"

BowItem::BowItem() = default;
BowItem::~BowItem() = default;

int BowItem::getID() const {
  return 718;
}

std::shared_ptr<Item> BowItem::clone() const {
  return std::make_shared<BowItem>();
}
