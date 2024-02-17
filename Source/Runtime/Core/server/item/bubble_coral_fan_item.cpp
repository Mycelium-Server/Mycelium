
#include "bubble_coral_fan_item.h"

#include "../block/bubble_coral_fan_block.h"

BubbleCoralFanItem::BubbleCoralFanItem() = default;
BubbleCoralFanItem::~BubbleCoralFanItem() = default;

int BubbleCoralFanItem::getID() const {
  return 562;
}

std::shared_ptr<Item> BubbleCoralFanItem::clone() const {
  return std::make_shared<BubbleCoralFanItem>();
}

int BubbleCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BubbleCoralFanBlock().getId();
}