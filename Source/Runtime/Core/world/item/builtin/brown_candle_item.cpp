
#include "brown_candle_item.h"

#include "../../block/builtin/brown_candle_block.h"

BrownCandleItem::BrownCandleItem() = default;
BrownCandleItem::~BrownCandleItem() = default;

int BrownCandleItem::getID() const {
  return 1138;
}

std::shared_ptr<Item> BrownCandleItem::clone() const {
  return std::make_shared<BrownCandleItem>();
}

int BrownCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownCandleBlock().getId();
}