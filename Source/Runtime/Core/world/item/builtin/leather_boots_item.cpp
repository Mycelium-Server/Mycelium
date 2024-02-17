
#include "leather_boots_item.h"

LeatherBootsItem::LeatherBootsItem() = default;
LeatherBootsItem::~LeatherBootsItem() = default;

int LeatherBootsItem::getID() const {
  return 777;
}

std::shared_ptr<Item> LeatherBootsItem::clone() const {
  return std::make_shared<LeatherBootsItem>();
}
