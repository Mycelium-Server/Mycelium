
#include "tnt_minecart_item.h"

TntMinecartItem::TntMinecartItem() = default;
TntMinecartItem::~TntMinecartItem() = default;

int TntMinecartItem::getID() const {
  return 693;
}

std::shared_ptr<Item> TntMinecartItem::clone() const {
  return std::make_shared<TntMinecartItem>();
}
