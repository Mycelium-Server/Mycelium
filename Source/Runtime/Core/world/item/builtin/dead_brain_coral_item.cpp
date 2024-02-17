
#include "dead_brain_coral_item.h"

#include "../../block/builtin/dead_brain_coral_block.h"

DeadBrainCoralItem::DeadBrainCoralItem() = default;
DeadBrainCoralItem::~DeadBrainCoralItem() = default;

int DeadBrainCoralItem::getID() const {
  return 555;
}

std::shared_ptr<Item> DeadBrainCoralItem::clone() const {
  return std::make_shared<DeadBrainCoralItem>();
}

int DeadBrainCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadBrainCoralBlock().getId();
}