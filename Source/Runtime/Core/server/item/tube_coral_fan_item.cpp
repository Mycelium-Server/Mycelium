
#include "tube_coral_fan_item.h"

#include "../block/tube_coral_fan_block.h"

TubeCoralFanItem::TubeCoralFanItem() = default;
TubeCoralFanItem::~TubeCoralFanItem() = default;

int TubeCoralFanItem::getID() const {
  return 560;
}

std::shared_ptr<Item> TubeCoralFanItem::clone() const {
  return std::make_shared<TubeCoralFanItem>();
}

int TubeCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TubeCoralFanBlock().getId();
}