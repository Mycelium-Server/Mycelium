
#include "mossy_stone_brick_slab_item.h"

#include "../../block/builtin/mossy_stone_brick_slab_block.h"

MossyStoneBrickSlabItem::MossyStoneBrickSlabItem() = default;
MossyStoneBrickSlabItem::~MossyStoneBrickSlabItem() = default;

int MossyStoneBrickSlabItem::getID() const {
  return 592;
}

std::shared_ptr<Item> MossyStoneBrickSlabItem::clone() const {
  return std::make_shared<MossyStoneBrickSlabItem>();
}

int MossyStoneBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossyStoneBrickSlabBlock().getId();
}