
#include "warped_stairs_item.h"

#include "../../block/builtin/warped_stairs_block.h"

WarpedStairsItem::WarpedStairsItem() = default;
WarpedStairsItem::~WarpedStairsItem() = default;

int WarpedStairsItem::getID() const {
  return 346;
}

std::shared_ptr<Item> WarpedStairsItem::clone() const {
  return std::make_shared<WarpedStairsItem>();
}

int WarpedStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedStairsBlock().getId();
}
