
#include "dead_bubble_coral_fan_item.h"

#include "../block/dead_bubble_coral_fan_block.h"

DeadBubbleCoralFanItem::DeadBubbleCoralFanItem() = default;
DeadBubbleCoralFanItem::~DeadBubbleCoralFanItem() = default;

int DeadBubbleCoralFanItem::getID() const {
  return 567;
}

std::shared_ptr<Item> DeadBubbleCoralFanItem::clone() const {
  return std::make_shared<DeadBubbleCoralFanItem>();
}

int DeadBubbleCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadBubbleCoralFanBlock().getId();
}