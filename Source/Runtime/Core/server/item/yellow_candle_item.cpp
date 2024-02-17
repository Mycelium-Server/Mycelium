
#include "yellow_candle_item.h"

#include "../block/yellow_candle_block.h"

YellowCandleItem::YellowCandleItem() = default;
YellowCandleItem::~YellowCandleItem() = default;

int YellowCandleItem::getID() const {
  return 1130;
}

std::shared_ptr<Item> YellowCandleItem::clone() const {
  return std::make_shared<YellowCandleItem>();
}

int YellowCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowCandleBlock().getId();
}