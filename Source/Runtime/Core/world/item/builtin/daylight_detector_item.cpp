
#include "daylight_detector_item.h"

#include "../../block/builtin/daylight_detector_block.h"

DaylightDetectorItem::DaylightDetectorItem() = default;
DaylightDetectorItem::~DaylightDetectorItem() = default;

int DaylightDetectorItem::getID() const {
  return 625;
}

std::shared_ptr<Item> DaylightDetectorItem::clone() const {
  return std::make_shared<DaylightDetectorItem>();
}

int DaylightDetectorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DaylightDetectorBlock().getId();
}