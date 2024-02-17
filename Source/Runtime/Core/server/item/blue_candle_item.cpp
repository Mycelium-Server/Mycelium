
#include "blue_candle_item.h"

#include "../block/blue_candle_block.h"

BlueCandleItem::BlueCandleItem() = default;
BlueCandleItem::~BlueCandleItem() = default;

int BlueCandleItem::getID() const {
  return 1137;
}

std::shared_ptr<Item> BlueCandleItem::clone() const {
  return std::make_shared<BlueCandleItem>();
}

int BlueCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueCandleBlock().getId();
}