
#include "sweet_berries_item.h"

SweetBerriesItem::SweetBerriesItem() = default;
SweetBerriesItem::~SweetBerriesItem() = default;

int SweetBerriesItem::getID() const {
  return 1100;
}

std::shared_ptr<Item> SweetBerriesItem::clone() const {
  return std::make_shared<SweetBerriesItem>();
}
