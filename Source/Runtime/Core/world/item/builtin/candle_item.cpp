
#include "candle_item.h"

#include "../../block/builtin/candle_block.h"

CandleItem::CandleItem() = default;
CandleItem::~CandleItem() = default;

int CandleItem::getID() const {
  return 1125;
}

std::shared_ptr<Item> CandleItem::clone() const {
  return std::make_shared<CandleItem>();
}

int CandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CandleBlock().getId();
}