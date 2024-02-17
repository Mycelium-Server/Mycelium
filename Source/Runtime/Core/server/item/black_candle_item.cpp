
#include "black_candle_item.h"

#include "../block/black_candle_block.h"

BlackCandleItem::BlackCandleItem() = default;
BlackCandleItem::~BlackCandleItem() = default;

int BlackCandleItem::getID() const {
  return 1141;
}

std::shared_ptr<Item> BlackCandleItem::clone() const {
  return std::make_shared<BlackCandleItem>();
}

int BlackCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackCandleBlock().getId();
}