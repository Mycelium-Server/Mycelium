
#include "smooth_sandstone_stairs_item.h"

#include "../../block/builtin/smooth_sandstone_stairs_block.h"

SmoothSandstoneStairsItem::SmoothSandstoneStairsItem() = default;
SmoothSandstoneStairsItem::~SmoothSandstoneStairsItem() = default;

int SmoothSandstoneStairsItem::getID() const {
  return 579;
}

std::shared_ptr<Item> SmoothSandstoneStairsItem::clone() const {
  return std::make_shared<SmoothSandstoneStairsItem>();
}

int SmoothSandstoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothSandstoneStairsBlock().getId();
}
