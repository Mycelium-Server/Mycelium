
#include "nether_brick_item.h"

NetherBrickItem::NetherBrickItem() = default;
NetherBrickItem::~NetherBrickItem() = default;

int NetherBrickItem::getID() const {
  return 1007;
}

std::shared_ptr<Item> NetherBrickItem::clone() const {
  return std::make_shared<NetherBrickItem>();
}
