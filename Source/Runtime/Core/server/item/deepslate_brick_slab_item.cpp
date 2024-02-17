
#include "deepslate_brick_slab_item.h"

#include "../block/deepslate_brick_slab_block.h"

DeepslateBrickSlabItem::DeepslateBrickSlabItem() = default;
DeepslateBrickSlabItem::~DeepslateBrickSlabItem() = default;

int DeepslateBrickSlabItem::getID() const {
  return 605;
}

std::shared_ptr<Item> DeepslateBrickSlabItem::clone() const {
  return std::make_shared<DeepslateBrickSlabItem>();
}

int DeepslateBrickSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateBrickSlabBlock().getId();
}
