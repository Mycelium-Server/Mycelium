
#include "target_item.h"

#include "../block/target_block.h"

TargetItem::TargetItem() = default;
TargetItem::~TargetItem() = default;

int TargetItem::getID() const {
  return 622;
}

std::shared_ptr<Item> TargetItem::clone() const {
  return std::make_shared<TargetItem>();
}

int TargetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TargetBlock().getId();
}