
#include "brain_coral_item.h"

#include "../../block/builtin/brain_coral_block.h"

BrainCoralItem::BrainCoralItem() = default;
BrainCoralItem::~BrainCoralItem() = default;

int BrainCoralItem::getID() const {
  return 551;
}

std::shared_ptr<Item> BrainCoralItem::clone() const {
  return std::make_shared<BrainCoralItem>();
}

int BrainCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrainCoralBlock().getId();
}
