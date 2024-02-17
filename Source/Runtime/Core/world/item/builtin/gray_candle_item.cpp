
#include "gray_candle_item.h"

#include "../../block/builtin/gray_candle_block.h"

GrayCandleItem::GrayCandleItem() = default;
GrayCandleItem::~GrayCandleItem() = default;

int GrayCandleItem::getID() const {
  return 1133;
}

std::shared_ptr<Item> GrayCandleItem::clone() const {
  return std::make_shared<GrayCandleItem>();
}

int GrayCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayCandleBlock().getId();
}