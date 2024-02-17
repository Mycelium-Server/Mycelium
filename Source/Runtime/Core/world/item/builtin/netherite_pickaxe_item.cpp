
#include "netherite_pickaxe_item.h"

NetheritePickaxeItem::NetheritePickaxeItem() = default;
NetheritePickaxeItem::~NetheritePickaxeItem() = default;

int NetheritePickaxeItem::getID() const {
  return 762;
}

std::shared_ptr<Item> NetheritePickaxeItem::clone() const {
  return std::make_shared<NetheritePickaxeItem>();
}
