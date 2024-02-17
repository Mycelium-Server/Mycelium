
#include "sandstone_slab_item.h"

#include "../block/sandstone_slab_block.h"

SandstoneSlabItem::SandstoneSlabItem() = default;
SandstoneSlabItem::~SandstoneSlabItem() = default;

int SandstoneSlabItem::getID() const {
  return 225;
}

std::shared_ptr<Item> SandstoneSlabItem::clone() const {
  return std::make_shared<SandstoneSlabItem>();
}

int SandstoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SandstoneSlabBlock().getId();
}
