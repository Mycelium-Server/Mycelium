
#include "netherite_axe_item.h"

NetheriteAxeItem::NetheriteAxeItem() = default;
NetheriteAxeItem::~NetheriteAxeItem() = default;

int NetheriteAxeItem::getID() const {
  return 763;
}

std::shared_ptr<Item> NetheriteAxeItem::clone() const {
  return std::make_shared<NetheriteAxeItem>();
}
