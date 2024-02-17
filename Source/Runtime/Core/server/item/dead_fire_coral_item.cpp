
#include "dead_fire_coral_item.h"

#include "../block/dead_fire_coral_block.h"

DeadFireCoralItem::DeadFireCoralItem() = default;
DeadFireCoralItem::~DeadFireCoralItem() = default;

int DeadFireCoralItem::getID() const {
  return 557;
}

std::shared_ptr<Item> DeadFireCoralItem::clone() const {
  return std::make_shared<DeadFireCoralItem>();
}

int DeadFireCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadFireCoralBlock().getId();
}
