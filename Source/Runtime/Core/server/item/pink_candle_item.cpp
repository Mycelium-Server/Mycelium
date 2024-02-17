
#include "pink_candle_item.h"

#include "../block/pink_candle_block.h"

PinkCandleItem::PinkCandleItem() = default;
PinkCandleItem::~PinkCandleItem() = default;

int PinkCandleItem::getID() const {
  return 1132;
}

std::shared_ptr<Item> PinkCandleItem::clone() const {
  return std::make_shared<PinkCandleItem>();
}

int PinkCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkCandleBlock().getId();
}