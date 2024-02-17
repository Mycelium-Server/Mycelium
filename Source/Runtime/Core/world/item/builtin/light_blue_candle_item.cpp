
#include "light_blue_candle_item.h"

#include "../../block/builtin/light_blue_candle_block.h"

LightBlueCandleItem::LightBlueCandleItem() = default;
LightBlueCandleItem::~LightBlueCandleItem() = default;

int LightBlueCandleItem::getID() const {
  return 1129;
}

std::shared_ptr<Item> LightBlueCandleItem::clone() const {
  return std::make_shared<LightBlueCandleItem>();
}

int LightBlueCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueCandleBlock().getId();
}