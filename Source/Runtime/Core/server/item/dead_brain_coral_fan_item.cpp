
#include "dead_brain_coral_fan_item.h"

#include "../block/dead_brain_coral_fan_block.h"

DeadBrainCoralFanItem::DeadBrainCoralFanItem() = default;
DeadBrainCoralFanItem::~DeadBrainCoralFanItem() = default;

int DeadBrainCoralFanItem::getID() const {
  return 566;
}

std::shared_ptr<Item> DeadBrainCoralFanItem::clone() const {
  return std::make_shared<DeadBrainCoralFanItem>();
}

int DeadBrainCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadBrainCoralFanBlock().getId();
}