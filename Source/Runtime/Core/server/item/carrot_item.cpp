
#include "carrot_item.h"

CarrotItem::CarrotItem() = default;
CarrotItem::~CarrotItem() = default;

int CarrotItem::getID() const {
  return 990;
}

std::shared_ptr<Item> CarrotItem::clone() const {
  return std::make_shared<CarrotItem>();
}
