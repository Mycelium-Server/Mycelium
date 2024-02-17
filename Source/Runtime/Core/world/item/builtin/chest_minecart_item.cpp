
#include "chest_minecart_item.h"

ChestMinecartItem::ChestMinecartItem() = default;
ChestMinecartItem::~ChestMinecartItem() = default;

int ChestMinecartItem::getID() const {
  return 691;
}

std::shared_ptr<Item> ChestMinecartItem::clone() const {
  return std::make_shared<ChestMinecartItem>();
}
