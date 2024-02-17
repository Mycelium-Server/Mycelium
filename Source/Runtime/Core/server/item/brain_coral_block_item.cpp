
#include "brain_coral_block_item.h"

#include "../block/brain_coral_block_block.h"

BrainCoralBlockItem::BrainCoralBlockItem() = default;
BrainCoralBlockItem::~BrainCoralBlockItem() = default;

int BrainCoralBlockItem::getID() const {
  return 546;
}

std::shared_ptr<Item> BrainCoralBlockItem::clone() const {
  return std::make_shared<BrainCoralBlockItem>();
}

int BrainCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrainCoralBlockBlock().getId();
}
