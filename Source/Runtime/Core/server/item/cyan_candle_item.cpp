
#include "cyan_candle_item.h"

#include "../block/cyan_candle_block.h"

CyanCandleItem::CyanCandleItem() = default;
CyanCandleItem::~CyanCandleItem() = default;

int CyanCandleItem::getID() const {
  return 1135;
}

std::shared_ptr<Item> CyanCandleItem::clone() const {
  return std::make_shared<CyanCandleItem>();
}

int CyanCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanCandleBlock().getId();
}