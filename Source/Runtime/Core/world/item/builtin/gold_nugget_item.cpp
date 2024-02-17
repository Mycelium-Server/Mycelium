
#include "gold_nugget_item.h"

GoldNuggetItem::GoldNuggetItem() = default;
GoldNuggetItem::~GoldNuggetItem() = default;

int GoldNuggetItem::getID() const {
  return 900;
}

std::shared_ptr<Item> GoldNuggetItem::clone() const {
  return std::make_shared<GoldNuggetItem>();
}
