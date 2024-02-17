
#include "wooden_pickaxe_item.h"

WoodenPickaxeItem::WoodenPickaxeItem() = default;
WoodenPickaxeItem::~WoodenPickaxeItem() = default;

int WoodenPickaxeItem::getID() const {
  return 737;
}

std::shared_ptr<Item> WoodenPickaxeItem::clone() const {
  return std::make_shared<WoodenPickaxeItem>();
}
