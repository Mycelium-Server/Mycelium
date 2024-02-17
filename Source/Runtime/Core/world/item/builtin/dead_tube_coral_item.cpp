
#include "dead_tube_coral_item.h"

#include "../../block/builtin/dead_tube_coral_block.h"

DeadTubeCoralItem::DeadTubeCoralItem() = default;
DeadTubeCoralItem::~DeadTubeCoralItem() = default;

int DeadTubeCoralItem::getID() const {
  return 559;
}

std::shared_ptr<Item> DeadTubeCoralItem::clone() const {
  return std::make_shared<DeadTubeCoralItem>();
}

int DeadTubeCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadTubeCoralBlock().getId();
}