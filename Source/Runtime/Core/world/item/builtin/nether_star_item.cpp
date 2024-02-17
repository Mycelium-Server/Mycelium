
#include "nether_star_item.h"

NetherStarItem::NetherStarItem() = default;
NetherStarItem::~NetherStarItem() = default;

int NetherStarItem::getID() const {
  return 1002;
}

std::shared_ptr<Item> NetherStarItem::clone() const {
  return std::make_shared<NetherStarItem>();
}
