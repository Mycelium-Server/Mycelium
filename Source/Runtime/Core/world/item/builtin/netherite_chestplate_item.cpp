
#include "netherite_chestplate_item.h"

NetheriteChestplateItem::NetheriteChestplateItem() = default;
NetheriteChestplateItem::~NetheriteChestplateItem() = default;

int NetheriteChestplateItem::getID() const {
  return 795;
}

std::shared_ptr<Item> NetheriteChestplateItem::clone() const {
  return std::make_shared<NetheriteChestplateItem>();
}
