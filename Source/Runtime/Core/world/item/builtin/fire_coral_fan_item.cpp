
#include "fire_coral_fan_item.h"

#include "../../block/builtin/fire_coral_fan_block.h"

FireCoralFanItem::FireCoralFanItem() = default;
FireCoralFanItem::~FireCoralFanItem() = default;

int FireCoralFanItem::getID() const {
  return 563;
}

std::shared_ptr<Item> FireCoralFanItem::clone() const {
  return std::make_shared<FireCoralFanItem>();
}

int FireCoralFanItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FireCoralFanBlock().getId();
}