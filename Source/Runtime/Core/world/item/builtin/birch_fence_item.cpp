
#include "birch_fence_item.h"

#include "../../block/builtin/birch_fence_block.h"

BirchFenceItem::BirchFenceItem() = default;
BirchFenceItem::~BirchFenceItem() = default;

int BirchFenceItem::getID() const {
  return 270;
}

std::shared_ptr<Item> BirchFenceItem::clone() const {
  return std::make_shared<BirchFenceItem>();
}

int BirchFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchFenceBlock().getId();
}
