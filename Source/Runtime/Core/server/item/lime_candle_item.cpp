
#include "lime_candle_item.h"

#include "../block/lime_candle_block.h"

LimeCandleItem::LimeCandleItem() = default;
LimeCandleItem::~LimeCandleItem() = default;

int LimeCandleItem::getID() const {
  return 1131;
}

std::shared_ptr<Item> LimeCandleItem::clone() const {
  return std::make_shared<LimeCandleItem>();
}

int LimeCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeCandleBlock().getId();
}