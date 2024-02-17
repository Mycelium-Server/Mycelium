
#include "carrot_on_a_stick_item.h"

CarrotOnAStickItem::CarrotOnAStickItem() = default;
CarrotOnAStickItem::~CarrotOnAStickItem() = default;

int CarrotOnAStickItem::getID() const {
  return 695;
}

std::shared_ptr<Item> CarrotOnAStickItem::clone() const {
  return std::make_shared<CarrotOnAStickItem>();
}
