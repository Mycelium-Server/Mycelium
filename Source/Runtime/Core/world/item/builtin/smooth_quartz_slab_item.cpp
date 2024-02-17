
#include "smooth_quartz_slab_item.h"

#include "../../block/builtin/smooth_quartz_slab_block.h"

SmoothQuartzSlabItem::SmoothQuartzSlabItem() = default;
SmoothQuartzSlabItem::~SmoothQuartzSlabItem() = default;

int SmoothQuartzSlabItem::getID() const {
  return 597;
}

std::shared_ptr<Item> SmoothQuartzSlabItem::clone() const {
  return std::make_shared<SmoothQuartzSlabItem>();
}

int SmoothQuartzSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothQuartzSlabBlock().getId();
}