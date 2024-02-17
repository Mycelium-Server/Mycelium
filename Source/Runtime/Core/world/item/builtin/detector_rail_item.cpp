
#include "detector_rail_item.h"

#include "../../block/builtin/detector_rail_block.h"

DetectorRailItem::DetectorRailItem() = default;
DetectorRailItem::~DetectorRailItem() = default;

int DetectorRailItem::getID() const {
  return 686;
}

std::shared_ptr<Item> DetectorRailItem::clone() const {
  return std::make_shared<DetectorRailItem>();
}

int DetectorRailItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DetectorRailBlock().getId();
}