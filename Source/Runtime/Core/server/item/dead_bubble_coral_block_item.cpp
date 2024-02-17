
#include "dead_bubble_coral_block_item.h"

#include "../block/dead_bubble_coral_block_block.h"

DeadBubbleCoralBlockItem::DeadBubbleCoralBlockItem() = default;
DeadBubbleCoralBlockItem::~DeadBubbleCoralBlockItem() = default;

int DeadBubbleCoralBlockItem::getID() const {
  return 542;
}

std::shared_ptr<Item> DeadBubbleCoralBlockItem::clone() const {
  return std::make_shared<DeadBubbleCoralBlockItem>();
}

int DeadBubbleCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadBubbleCoralBlockBlock().getId();
}