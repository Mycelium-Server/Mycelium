
#include "sculk_sensor_item.h"

#include "../../block/builtin/sculk_sensor_block.h"

SculkSensorItem::SculkSensorItem() = default;
SculkSensorItem::~SculkSensorItem() = default;

int SculkSensorItem::getID() const {
  return 626;
}

std::shared_ptr<Item> SculkSensorItem::clone() const {
  return std::make_shared<SculkSensorItem>();
}

int SculkSensorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SculkSensorBlock().getId();
}