
#include "golden_pickaxe_item.h"

GoldenPickaxeItem::GoldenPickaxeItem() = default;
GoldenPickaxeItem::~GoldenPickaxeItem() = default;

int GoldenPickaxeItem::getID() const {
  return 747;
}

std::shared_ptr<Item> GoldenPickaxeItem::clone() const {
  return std::make_shared<GoldenPickaxeItem>();
}
