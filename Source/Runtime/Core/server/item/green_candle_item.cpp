
#include "green_candle_item.h"

#include "../block/green_candle_block.h"

GreenCandleItem::GreenCandleItem() = default;
GreenCandleItem::~GreenCandleItem() = default;

int GreenCandleItem::getID() const {
  return 1139;
}

std::shared_ptr<Item> GreenCandleItem::clone() const {
  return std::make_shared<GreenCandleItem>();
}

int GreenCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenCandleBlock().getId();
}