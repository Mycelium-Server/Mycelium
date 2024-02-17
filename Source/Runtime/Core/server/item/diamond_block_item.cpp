
#include "diamond_block_item.h"

#include "../block/diamond_block_block.h"

DiamondBlockItem::DiamondBlockItem() = default;
DiamondBlockItem::~DiamondBlockItem() = default;

int DiamondBlockItem::getID() const {
  return 71;
}

std::shared_ptr<Item> DiamondBlockItem::clone() const {
  return std::make_shared<DiamondBlockItem>();
}

int DiamondBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DiamondBlockBlock().getId();
}
