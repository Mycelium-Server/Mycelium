
#include "netherite_sword_item.h"

NetheriteSwordItem::NetheriteSwordItem() = default;
NetheriteSwordItem::~NetheriteSwordItem() = default;

int NetheriteSwordItem::getID() const {
  return 760;
}

std::shared_ptr<Item> NetheriteSwordItem::clone() const {
  return std::make_shared<NetheriteSwordItem>();
}
