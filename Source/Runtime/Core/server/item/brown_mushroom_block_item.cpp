
#include "brown_mushroom_block_item.h"

#include "../block/brown_mushroom_block_block.h"

BrownMushroomBlockItem::BrownMushroomBlockItem() = default;
BrownMushroomBlockItem::~BrownMushroomBlockItem() = default;

int BrownMushroomBlockItem::getID() const {
  return 307;
}

std::shared_ptr<Item> BrownMushroomBlockItem::clone() const {
  return std::make_shared<BrownMushroomBlockItem>();
}

int BrownMushroomBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownMushroomBlockBlock().getId();
}