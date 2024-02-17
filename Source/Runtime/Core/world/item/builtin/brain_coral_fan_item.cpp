
#include "brain_coral_fan_item.h"

#include "../../block/builtin/brain_coral_fan_block.h"

BrainCoralFanItem::BrainCoralFanItem() = default;
BrainCoralFanItem::~BrainCoralFanItem() = default;

int BrainCoralFanItem::getID() const {
  return 561;
}

std::shared_ptr<Item> BrainCoralFanItem::clone() const {
  return std::make_shared<BrainCoralFanItem>();
}

int BrainCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrainCoralFanBlock().getId();
}