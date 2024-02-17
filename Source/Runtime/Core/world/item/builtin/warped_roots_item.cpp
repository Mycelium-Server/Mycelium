
#include "warped_roots_item.h"

#include "../../block/builtin/warped_roots_block.h"

WarpedRootsItem::WarpedRootsItem() = default;
WarpedRootsItem::~WarpedRootsItem() = default;

int WarpedRootsItem::getID() const {
  return 202;
}

std::shared_ptr<Item> WarpedRootsItem::clone() const {
  return std::make_shared<WarpedRootsItem>();
}

int WarpedRootsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedRootsBlock().getId();
}