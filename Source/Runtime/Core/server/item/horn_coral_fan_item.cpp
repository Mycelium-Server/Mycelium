
#include "horn_coral_fan_item.h"

#include "../block/horn_coral_fan_block.h"

HornCoralFanItem::HornCoralFanItem() = default;
HornCoralFanItem::~HornCoralFanItem() = default;

int HornCoralFanItem::getID() const {
  return 564;
}

std::shared_ptr<Item> HornCoralFanItem::clone() const {
  return std::make_shared<HornCoralFanItem>();
}

int HornCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HornCoralFanBlock().getId();
}
