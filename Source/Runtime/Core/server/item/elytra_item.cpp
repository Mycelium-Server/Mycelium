
#include "elytra_item.h"

ElytraItem::ElytraItem() = default;
ElytraItem::~ElytraItem() = default;

int ElytraItem::getID() const {
  return 697;
}

std::shared_ptr<Item> ElytraItem::clone() const {
  return std::make_shared<ElytraItem>();
}
