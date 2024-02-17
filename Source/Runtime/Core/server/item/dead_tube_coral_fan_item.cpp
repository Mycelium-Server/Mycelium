
#include "dead_tube_coral_fan_item.h"

#include "../block/dead_tube_coral_fan_block.h"

DeadTubeCoralFanItem::DeadTubeCoralFanItem() = default;
DeadTubeCoralFanItem::~DeadTubeCoralFanItem() = default;

int DeadTubeCoralFanItem::getID() const {
  return 565;
}

std::shared_ptr<Item> DeadTubeCoralFanItem::clone() const {
  return std::make_shared<DeadTubeCoralFanItem>();
}

int DeadTubeCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadTubeCoralFanBlock().getId();
}