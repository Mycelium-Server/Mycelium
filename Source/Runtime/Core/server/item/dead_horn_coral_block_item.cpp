
#include "dead_horn_coral_block_item.h"

#include "../block/dead_horn_coral_block_block.h"

DeadHornCoralBlockItem::DeadHornCoralBlockItem() = default;
DeadHornCoralBlockItem::~DeadHornCoralBlockItem() = default;

int DeadHornCoralBlockItem::getID() const {
  return 544;
}

std::shared_ptr<Item> DeadHornCoralBlockItem::clone() const {
  return std::make_shared<DeadHornCoralBlockItem>();
}

int DeadHornCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadHornCoralBlockBlock().getId();
}
