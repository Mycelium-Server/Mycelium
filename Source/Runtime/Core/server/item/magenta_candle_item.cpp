
#include "magenta_candle_item.h"

#include "../block/magenta_candle_block.h"

MagentaCandleItem::MagentaCandleItem() = default;
MagentaCandleItem::~MagentaCandleItem() = default;

int MagentaCandleItem::getID() const {
  return 1128;
}

std::shared_ptr<Item> MagentaCandleItem::clone() const {
  return std::make_shared<MagentaCandleItem>();
}

int MagentaCandleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaCandleBlock().getId();
}
