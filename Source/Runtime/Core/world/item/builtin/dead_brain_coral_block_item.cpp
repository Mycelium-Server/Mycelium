
#include "dead_brain_coral_block_item.h"

#include "../../block/builtin/dead_brain_coral_block_block.h"

DeadBrainCoralBlockItem::DeadBrainCoralBlockItem() = default;
DeadBrainCoralBlockItem::~DeadBrainCoralBlockItem() = default;

int DeadBrainCoralBlockItem::getID() const {
  return 541;
}

std::shared_ptr<Item> DeadBrainCoralBlockItem::clone() const {
  return std::make_shared<DeadBrainCoralBlockItem>();
}

int DeadBrainCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadBrainCoralBlockBlock().getId();
}
