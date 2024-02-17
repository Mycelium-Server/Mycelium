
#include "rail_item.h"

#include "../block/rail_block.h"

RailItem::RailItem() = default;
RailItem::~RailItem() = default;

int RailItem::getID() const {
  return 687;
}

std::shared_ptr<Item> RailItem::clone() const {
  return std::make_shared<RailItem>();
}

int RailItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RailBlock().getId();
}