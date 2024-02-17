
#include "purple_candle_item.h"

#include "../../block/builtin/purple_candle_block.h"

PurpleCandleItem::PurpleCandleItem() = default;
PurpleCandleItem::~PurpleCandleItem() = default;

int PurpleCandleItem::getID() const {
  return 1136;
}

std::shared_ptr<Item> PurpleCandleItem::clone() const {
  return std::make_shared<PurpleCandleItem>();
}

int PurpleCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleCandleBlock().getId();
}
