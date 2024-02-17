
#include "gold_ingot_item.h"

GoldIngotItem::GoldIngotItem() = default;
GoldIngotItem::~GoldIngotItem() = default;

int GoldIngotItem::getID() const {
  return 732;
}

std::shared_ptr<Item> GoldIngotItem::clone() const {
  return std::make_shared<GoldIngotItem>();
}
