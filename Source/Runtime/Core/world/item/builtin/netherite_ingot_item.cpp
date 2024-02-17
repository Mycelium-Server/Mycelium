
#include "netherite_ingot_item.h"

NetheriteIngotItem::NetheriteIngotItem() = default;
NetheriteIngotItem::~NetheriteIngotItem() = default;

int NetheriteIngotItem::getID() const {
  return 733;
}

std::shared_ptr<Item> NetheriteIngotItem::clone() const {
  return std::make_shared<NetheriteIngotItem>();
}
