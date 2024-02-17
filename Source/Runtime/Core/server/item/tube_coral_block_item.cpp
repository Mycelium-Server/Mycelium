
#include "tube_coral_block_item.h"

#include "../block/tube_coral_block_block.h"

TubeCoralBlockItem::TubeCoralBlockItem() = default;
TubeCoralBlockItem::~TubeCoralBlockItem() = default;

int TubeCoralBlockItem::getID() const {
  return 545;
}

std::shared_ptr<Item> TubeCoralBlockItem::clone() const {
  return std::make_shared<TubeCoralBlockItem>();
}

int TubeCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TubeCoralBlockBlock().getId();
}