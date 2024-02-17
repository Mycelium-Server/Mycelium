
#include "smooth_quartz_stairs_item.h"

#include "../block/smooth_quartz_stairs_block.h"

SmoothQuartzStairsItem::SmoothQuartzStairsItem() = default;
SmoothQuartzStairsItem::~SmoothQuartzStairsItem() = default;

int SmoothQuartzStairsItem::getID() const {
  return 580;
}

std::shared_ptr<Item> SmoothQuartzStairsItem::clone() const {
  return std::make_shared<SmoothQuartzStairsItem>();
}

int SmoothQuartzStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothQuartzStairsBlock().getId();
}