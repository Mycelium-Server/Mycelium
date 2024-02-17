
#include "quartz_stairs_item.h"

#include "../../block/builtin/quartz_stairs_block.h"

QuartzStairsItem::QuartzStairsItem() = default;
QuartzStairsItem::~QuartzStairsItem() = default;

int QuartzStairsItem::getID() const {
  return 378;
}

std::shared_ptr<Item> QuartzStairsItem::clone() const {
  return std::make_shared<QuartzStairsItem>();
}

int QuartzStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return QuartzStairsBlock().getId();
}