
#include "porkchop_item.h"

PorkchopItem::PorkchopItem() = default;
PorkchopItem::~PorkchopItem() = default;

int PorkchopItem::getID() const {
  return 799;
}

std::shared_ptr<Item> PorkchopItem::clone() const {
  return std::make_shared<PorkchopItem>();
}
