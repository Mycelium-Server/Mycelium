
#include "smooth_red_sandstone_slab_item.h"

#include "../block/smooth_red_sandstone_slab_block.h"

SmoothRedSandstoneSlabItem::SmoothRedSandstoneSlabItem() = default;
SmoothRedSandstoneSlabItem::~SmoothRedSandstoneSlabItem() = default;

int SmoothRedSandstoneSlabItem::getID() const {
  return 591;
}

std::shared_ptr<Item> SmoothRedSandstoneSlabItem::clone() const {
  return std::make_shared<SmoothRedSandstoneSlabItem>();
}

int SmoothRedSandstoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothRedSandstoneSlabBlock().getId();
}