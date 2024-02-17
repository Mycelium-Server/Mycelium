
#include "nether_wart_item.h"

NetherWartItem::NetherWartItem() = default;
NetherWartItem::~NetherWartItem() = default;

int NetherWartItem::getID() const {
  return 901;
}

std::shared_ptr<Item> NetherWartItem::clone() const {
  return std::make_shared<NetherWartItem>();
}
