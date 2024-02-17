
#include "raw_copper_block_item.h"

#include "../block/raw_copper_block_block.h"

RawCopperBlockItem::RawCopperBlockItem() = default;
RawCopperBlockItem::~RawCopperBlockItem() = default;

int RawCopperBlockItem::getID() const {
  return 64;
}

std::shared_ptr<Item> RawCopperBlockItem::clone() const {
  return std::make_shared<RawCopperBlockItem>();
}

int RawCopperBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RawCopperBlockBlock().getId();
}