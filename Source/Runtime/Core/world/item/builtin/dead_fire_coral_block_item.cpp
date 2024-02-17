
#include "dead_fire_coral_block_item.h"

#include "../../block/builtin/dead_fire_coral_block_block.h"

DeadFireCoralBlockItem::DeadFireCoralBlockItem() = default;
DeadFireCoralBlockItem::~DeadFireCoralBlockItem() = default;

int DeadFireCoralBlockItem::getID() const {
  return 543;
}

std::shared_ptr<Item> DeadFireCoralBlockItem::clone() const {
  return std::make_shared<DeadFireCoralBlockItem>();
}

int DeadFireCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadFireCoralBlockBlock().getId();
}