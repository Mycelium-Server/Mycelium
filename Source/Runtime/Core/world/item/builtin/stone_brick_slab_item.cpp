
#include "stone_brick_slab_item.h"

#include "../../block/builtin/stone_brick_slab_block.h"

StoneBrickSlabItem::StoneBrickSlabItem() = default;
StoneBrickSlabItem::~StoneBrickSlabItem() = default;

int StoneBrickSlabItem::getID() const {
  return 230;
}

std::shared_ptr<Item> StoneBrickSlabItem::clone() const {
  return std::make_shared<StoneBrickSlabItem>();
}

int StoneBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StoneBrickSlabBlock().getId();
}
