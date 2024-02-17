
#include "bubble_coral_block_item.h"

#include "../block/bubble_coral_block_block.h"

BubbleCoralBlockItem::BubbleCoralBlockItem() = default;
BubbleCoralBlockItem::~BubbleCoralBlockItem() = default;

int BubbleCoralBlockItem::getID() const {
  return 547;
}

std::shared_ptr<Item> BubbleCoralBlockItem::clone() const {
  return std::make_shared<BubbleCoralBlockItem>();
}

int BubbleCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BubbleCoralBlockBlock().getId();
}