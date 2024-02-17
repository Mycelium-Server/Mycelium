
#include "brick_slab_item.h"

#include "../../block/builtin/brick_slab_block.h"

BrickSlabItem::BrickSlabItem() = default;
BrickSlabItem::~BrickSlabItem() = default;

int BrickSlabItem::getID() const {
  return 229;
}

std::shared_ptr<Item> BrickSlabItem::clone() const {
  return std::make_shared<BrickSlabItem>();
}

int BrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrickSlabBlock().getId();
}
