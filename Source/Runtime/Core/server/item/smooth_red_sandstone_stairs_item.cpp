
#include "smooth_red_sandstone_stairs_item.h"

#include "../block/smooth_red_sandstone_stairs_block.h"

SmoothRedSandstoneStairsItem::SmoothRedSandstoneStairsItem() = default;
SmoothRedSandstoneStairsItem::~SmoothRedSandstoneStairsItem() = default;

int SmoothRedSandstoneStairsItem::getID() const {
  return 573;
}

std::shared_ptr<Item> SmoothRedSandstoneStairsItem::clone() const {
  return std::make_shared<SmoothRedSandstoneStairsItem>();
}

int SmoothRedSandstoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothRedSandstoneStairsBlock().getId();
}