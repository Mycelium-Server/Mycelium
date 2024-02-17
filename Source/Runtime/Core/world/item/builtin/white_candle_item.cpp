
#include "white_candle_item.h"

#include "../../block/builtin/white_candle_block.h"

WhiteCandleItem::WhiteCandleItem() = default;
WhiteCandleItem::~WhiteCandleItem() = default;

int WhiteCandleItem::getID() const {
  return 1126;
}

std::shared_ptr<Item> WhiteCandleItem::clone() const {
  return std::make_shared<WhiteCandleItem>();
}

int WhiteCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteCandleBlock().getId();
}