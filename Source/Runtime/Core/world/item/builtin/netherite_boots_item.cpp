
#include "netherite_boots_item.h"

NetheriteBootsItem::NetheriteBootsItem() = default;
NetheriteBootsItem::~NetheriteBootsItem() = default;

int NetheriteBootsItem::getID() const {
  return 797;
}

std::shared_ptr<Item> NetheriteBootsItem::clone() const {
  return std::make_shared<NetheriteBootsItem>();
}
