
#include "salmon_item.h"

SalmonItem::SalmonItem() = default;
SalmonItem::~SalmonItem() = default;

int SalmonItem::getID() const {
  return 841;
}

std::shared_ptr<Item> SalmonItem::clone() const {
  return std::make_shared<SalmonItem>();
}
