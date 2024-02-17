
#include "red_candle_item.h"

#include "../../block/builtin/red_candle_block.h"

RedCandleItem::RedCandleItem() = default;
RedCandleItem::~RedCandleItem() = default;

int RedCandleItem::getID() const {
  return 1140;
}

std::shared_ptr<Item> RedCandleItem::clone() const {
  return std::make_shared<RedCandleItem>();
}

int RedCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedCandleBlock().getId();
}