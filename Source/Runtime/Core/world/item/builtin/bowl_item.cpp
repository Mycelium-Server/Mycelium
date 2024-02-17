
#include "bowl_item.h"

BowlItem::BowlItem() = default;
BowlItem::~BowlItem() = default;

int BowlItem::getID() const {
  return 766;
}

std::shared_ptr<Item> BowlItem::clone() const {
  return std::make_shared<BowlItem>();
}
