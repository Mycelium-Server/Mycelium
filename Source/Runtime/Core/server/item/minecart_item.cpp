
#include "minecart_item.h"

MinecartItem::MinecartItem() = default;
MinecartItem::~MinecartItem() = default;

int MinecartItem::getID() const {
  return 690;
}

std::shared_ptr<Item> MinecartItem::clone() const {
  return std::make_shared<MinecartItem>();
}
