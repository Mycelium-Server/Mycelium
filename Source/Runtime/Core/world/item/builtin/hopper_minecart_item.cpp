
#include "hopper_minecart_item.h"

HopperMinecartItem::HopperMinecartItem() = default;
HopperMinecartItem::~HopperMinecartItem() = default;

int HopperMinecartItem::getID() const {
  return 694;
}

std::shared_ptr<Item> HopperMinecartItem::clone() const {
  return std::make_shared<HopperMinecartItem>();
}
