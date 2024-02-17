
#include "golden_shovel_item.h"

GoldenShovelItem::GoldenShovelItem() = default;
GoldenShovelItem::~GoldenShovelItem() = default;

int GoldenShovelItem::getID() const {
  return 746;
}

std::shared_ptr<Item> GoldenShovelItem::clone() const {
  return std::make_shared<GoldenShovelItem>();
}
