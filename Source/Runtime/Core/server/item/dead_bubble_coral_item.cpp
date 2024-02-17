
#include "dead_bubble_coral_item.h"

#include "../block/dead_bubble_coral_block.h"

DeadBubbleCoralItem::DeadBubbleCoralItem() = default;
DeadBubbleCoralItem::~DeadBubbleCoralItem() = default;

int DeadBubbleCoralItem::getID() const {
  return 556;
}

std::shared_ptr<Item> DeadBubbleCoralItem::clone() const {
  return std::make_shared<DeadBubbleCoralItem>();
}

int DeadBubbleCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadBubbleCoralBlock().getId();
}
