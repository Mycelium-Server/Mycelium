
#include "bubble_coral_item.h"

#include "../../block/builtin/bubble_coral_block.h"

BubbleCoralItem::BubbleCoralItem() = default;
BubbleCoralItem::~BubbleCoralItem() = default;

int BubbleCoralItem::getID() const {
  return 552;
}

std::shared_ptr<Item> BubbleCoralItem::clone() const {
  return std::make_shared<BubbleCoralItem>();
}

int BubbleCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BubbleCoralBlock().getId();
}
