
#include "chicken_item.h"

ChickenItem::ChickenItem() = default;
ChickenItem::~ChickenItem() = default;

int ChickenItem::getID() const {
  return 894;
}

std::shared_ptr<Item> ChickenItem::clone() const {
  return std::make_shared<ChickenItem>();
}
