
#include "furnace_minecart_item.h"

FurnaceMinecartItem::FurnaceMinecartItem() = default;
FurnaceMinecartItem::~FurnaceMinecartItem() = default;

int FurnaceMinecartItem::getID() const {
  return 692;
}

std::shared_ptr<Item> FurnaceMinecartItem::clone() const {
  return std::make_shared<FurnaceMinecartItem>();
}
