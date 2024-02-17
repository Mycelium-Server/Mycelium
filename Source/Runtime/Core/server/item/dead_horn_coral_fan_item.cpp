
#include "dead_horn_coral_fan_item.h"

#include "../block/dead_horn_coral_fan_block.h"

DeadHornCoralFanItem::DeadHornCoralFanItem() = default;
DeadHornCoralFanItem::~DeadHornCoralFanItem() = default;

int DeadHornCoralFanItem::getID() const {
  return 569;
}

std::shared_ptr<Item> DeadHornCoralFanItem::clone() const {
  return std::make_shared<DeadHornCoralFanItem>();
}

int DeadHornCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadHornCoralFanBlock().getId();
}
