
#include "repeater_item.h"

#include "../block/repeater_block.h"

RepeaterItem::RepeaterItem() = default;
RepeaterItem::~RepeaterItem() = default;

int RepeaterItem::getID() const {
  return 611;
}

std::shared_ptr<Item> RepeaterItem::clone() const {
  return std::make_shared<RepeaterItem>();
}

int RepeaterItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RepeaterBlock().getId();
}