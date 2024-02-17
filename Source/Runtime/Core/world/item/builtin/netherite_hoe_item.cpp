
#include "netherite_hoe_item.h"

NetheriteHoeItem::NetheriteHoeItem() = default;
NetheriteHoeItem::~NetheriteHoeItem() = default;

int NetheriteHoeItem::getID() const {
  return 764;
}

std::shared_ptr<Item> NetheriteHoeItem::clone() const {
  return std::make_shared<NetheriteHoeItem>();
}
