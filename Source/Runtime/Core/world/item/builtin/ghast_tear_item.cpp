
#include "ghast_tear_item.h"

GhastTearItem::GhastTearItem() = default;
GhastTearItem::~GhastTearItem() = default;

int GhastTearItem::getID() const {
  return 899;
}

std::shared_ptr<Item> GhastTearItem::clone() const {
  return std::make_shared<GhastTearItem>();
}
