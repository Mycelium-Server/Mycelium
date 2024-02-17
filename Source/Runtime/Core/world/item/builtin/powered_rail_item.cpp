
#include "powered_rail_item.h"

#include "../../block/builtin/powered_rail_block.h"

PoweredRailItem::PoweredRailItem() = default;
PoweredRailItem::~PoweredRailItem() = default;

int PoweredRailItem::getID() const {
  return 685;
}

std::shared_ptr<Item> PoweredRailItem::clone() const {
  return std::make_shared<PoweredRailItem>();
}

int PoweredRailItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PoweredRailBlock().getId();
}