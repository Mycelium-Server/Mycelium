
#include "smooth_sandstone_slab_item.h"

#include "../../block/builtin/smooth_sandstone_slab_block.h"

SmoothSandstoneSlabItem::SmoothSandstoneSlabItem() = default;
SmoothSandstoneSlabItem::~SmoothSandstoneSlabItem() = default;

int SmoothSandstoneSlabItem::getID() const {
  return 596;
}

std::shared_ptr<Item> SmoothSandstoneSlabItem::clone() const {
  return std::make_shared<SmoothSandstoneSlabItem>();
}

int SmoothSandstoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothSandstoneSlabBlock().getId();
}