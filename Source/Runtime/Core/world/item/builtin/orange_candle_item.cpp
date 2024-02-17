
#include "orange_candle_item.h"

#include "../../block/builtin/orange_candle_block.h"

OrangeCandleItem::OrangeCandleItem() = default;
OrangeCandleItem::~OrangeCandleItem() = default;

int OrangeCandleItem::getID() const {
  return 1127;
}

std::shared_ptr<Item> OrangeCandleItem::clone() const {
  return std::make_shared<OrangeCandleItem>();
}

int OrangeCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeCandleBlock().getId();
}