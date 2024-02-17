
#include "netherite_helmet_item.h"

NetheriteHelmetItem::NetheriteHelmetItem() = default;
NetheriteHelmetItem::~NetheriteHelmetItem() = default;

int NetheriteHelmetItem::getID() const {
  return 794;
}

std::shared_ptr<Item> NetheriteHelmetItem::clone() const {
  return std::make_shared<NetheriteHelmetItem>();
}
