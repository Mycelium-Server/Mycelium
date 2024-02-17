
#include "barrier_item.h"

#include "../../block/builtin/barrier_block.h"

BarrierItem::BarrierItem() = default;
BarrierItem::~BarrierItem() = default;

int BarrierItem::getID() const {
  return 395;
}

std::shared_ptr<Item> BarrierItem::clone() const {
  return std::make_shared<BarrierItem>();
}

int BarrierItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BarrierBlock().getId();
}