
#include "activator_rail_item.h"

#include "../block/activator_rail_block.h"

ActivatorRailItem::ActivatorRailItem() = default;
ActivatorRailItem::~ActivatorRailItem() = default;

int ActivatorRailItem::getID() const {
  return 688;
}

std::shared_ptr<Item> ActivatorRailItem::clone() const {
  return std::make_shared<ActivatorRailItem>();
}

int ActivatorRailItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ActivatorRailBlock().getId();
}
