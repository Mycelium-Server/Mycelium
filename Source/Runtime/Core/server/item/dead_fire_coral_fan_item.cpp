
#include "dead_fire_coral_fan_item.h"

#include "../block/dead_fire_coral_fan_block.h"

DeadFireCoralFanItem::DeadFireCoralFanItem() = default;
DeadFireCoralFanItem::~DeadFireCoralFanItem() = default;

int DeadFireCoralFanItem::getID() const {
  return 568;
}

std::shared_ptr<Item> DeadFireCoralFanItem::clone() const {
  return std::make_shared<DeadFireCoralFanItem>();
}

int DeadFireCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadFireCoralFanBlock().getId();
}