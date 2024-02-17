
#include "dead_horn_coral_item.h"

#include "../block/dead_horn_coral_block.h"

DeadHornCoralItem::DeadHornCoralItem() = default;
DeadHornCoralItem::~DeadHornCoralItem() = default;

int DeadHornCoralItem::getID() const {
  return 558;
}

std::shared_ptr<Item> DeadHornCoralItem::clone() const {
  return std::make_shared<DeadHornCoralItem>();
}

int DeadHornCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadHornCoralBlock().getId();
}