
#include "beetroot_item.h"

BeetrootItem::BeetrootItem() = default;
BeetrootItem::~BeetrootItem() = default;

int BeetrootItem::getID() const {
  return 1044;
}

std::shared_ptr<Item> BeetrootItem::clone() const {
  return std::make_shared<BeetrootItem>();
}
