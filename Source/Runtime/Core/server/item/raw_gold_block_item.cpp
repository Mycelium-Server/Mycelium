
#include "raw_gold_block_item.h"

#include "../block/raw_gold_block_block.h"

RawGoldBlockItem::RawGoldBlockItem() = default;
RawGoldBlockItem::~RawGoldBlockItem() = default;

int RawGoldBlockItem::getID() const {
  return 65;
}

std::shared_ptr<Item> RawGoldBlockItem::clone() const {
  return std::make_shared<RawGoldBlockItem>();
}

int RawGoldBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RawGoldBlockBlock().getId();
}