
#include "netherite_shovel_item.h"

NetheriteShovelItem::NetheriteShovelItem() = default;
NetheriteShovelItem::~NetheriteShovelItem() = default;

int NetheriteShovelItem::getID() const {
  return 761;
}

std::shared_ptr<Item> NetheriteShovelItem::clone() const {
  return std::make_shared<NetheriteShovelItem>();
}
