
#include "red_mushroom_block_item.h"

#include "../block/red_mushroom_block_block.h"

RedMushroomBlockItem::RedMushroomBlockItem() = default;
RedMushroomBlockItem::~RedMushroomBlockItem() = default;

int RedMushroomBlockItem::getID() const {
  return 308;
}

std::shared_ptr<Item> RedMushroomBlockItem::clone() const {
  return std::make_shared<RedMushroomBlockItem>();
}

int RedMushroomBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedMushroomBlockBlock().getId();
}