
#include "chorus_fruit_item.h"

ChorusFruitItem::ChorusFruitItem() = default;
ChorusFruitItem::~ChorusFruitItem() = default;

int ChorusFruitItem::getID() const {
  return 1042;
}

std::shared_ptr<Item> ChorusFruitItem::clone() const {
  return std::make_shared<ChorusFruitItem>();
}
