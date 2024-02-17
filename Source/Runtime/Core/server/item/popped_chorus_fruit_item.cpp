
#include "popped_chorus_fruit_item.h"

PoppedChorusFruitItem::PoppedChorusFruitItem() = default;
PoppedChorusFruitItem::~PoppedChorusFruitItem() = default;

int PoppedChorusFruitItem::getID() const {
  return 1043;
}

std::shared_ptr<Item> PoppedChorusFruitItem::clone() const {
  return std::make_shared<PoppedChorusFruitItem>();
}
