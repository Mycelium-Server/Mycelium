
#include "dead_tube_coral_block_item.h"

#include "../../block/builtin/dead_tube_coral_block_block.h"

DeadTubeCoralBlockItem::DeadTubeCoralBlockItem() = default;
DeadTubeCoralBlockItem::~DeadTubeCoralBlockItem() = default;

int DeadTubeCoralBlockItem::getID() const {
  return 540;
}

std::shared_ptr<Item> DeadTubeCoralBlockItem::clone() const {
  return std::make_shared<DeadTubeCoralBlockItem>();
}

int DeadTubeCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadTubeCoralBlockBlock().getId();
}
