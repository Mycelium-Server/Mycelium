
#include "flint_and_steel_item.h"

FlintAndSteelItem::FlintAndSteelItem() = default;
FlintAndSteelItem::~FlintAndSteelItem() = default;

int FlintAndSteelItem::getID() const {
  return 716;
}

std::shared_ptr<Item> FlintAndSteelItem::clone() const {
  return std::make_shared<FlintAndSteelItem>();
}
