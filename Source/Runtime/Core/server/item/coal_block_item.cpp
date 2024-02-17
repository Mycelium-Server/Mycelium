
#include "coal_block_item.h"

#include "../block/coal_block_block.h"

CoalBlockItem::CoalBlockItem() = default;
CoalBlockItem::~CoalBlockItem() = default;

int CoalBlockItem::getID() const {
  return 62;
}

std::shared_ptr<Item> CoalBlockItem::clone() const {
  return std::make_shared<CoalBlockItem>();
}

int CoalBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CoalBlockBlock().getId();
}