
#include "iron_pickaxe_item.h"

IronPickaxeItem::IronPickaxeItem() = default;
IronPickaxeItem::~IronPickaxeItem() = default;

int IronPickaxeItem::getID() const {
  return 752;
}

std::shared_ptr<Item> IronPickaxeItem::clone() const {
  return std::make_shared<IronPickaxeItem>();
}
