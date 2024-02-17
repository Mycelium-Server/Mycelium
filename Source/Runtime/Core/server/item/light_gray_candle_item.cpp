
#include "light_gray_candle_item.h"

#include "../block/light_gray_candle_block.h"

LightGrayCandleItem::LightGrayCandleItem() = default;
LightGrayCandleItem::~LightGrayCandleItem() = default;

int LightGrayCandleItem::getID() const {
  return 1134;
}

std::shared_ptr<Item> LightGrayCandleItem::clone() const {
  return std::make_shared<LightGrayCandleItem>();
}

int LightGrayCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayCandleBlock().getId();
}
