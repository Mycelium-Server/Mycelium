
#include "waxed_copper_block_item.h"

#include "../block/waxed_copper_block_block.h"

WaxedCopperBlockItem::WaxedCopperBlockItem() = default;
WaxedCopperBlockItem::~WaxedCopperBlockItem() = default;

int WaxedCopperBlockItem::getID() const {
  return 88;
}

std::shared_ptr<Item> WaxedCopperBlockItem::clone() const {
  return std::make_shared<WaxedCopperBlockItem>();
}

int WaxedCopperBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedCopperBlockBlock().getId();
}