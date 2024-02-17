
#include "quartz_slab_item.h"

#include "../../block/builtin/quartz_slab_block.h"

QuartzSlabItem::QuartzSlabItem() = default;
QuartzSlabItem::~QuartzSlabItem() = default;

int QuartzSlabItem::getID() const {
  return 233;
}

std::shared_ptr<Item> QuartzSlabItem::clone() const {
  return std::make_shared<QuartzSlabItem>();
}

int QuartzSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return QuartzSlabBlock().getId();
}