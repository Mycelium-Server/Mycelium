
#include "red_nether_brick_stairs_item.h"

#include "../block/red_nether_brick_stairs_block.h"

RedNetherBrickStairsItem::RedNetherBrickStairsItem() = default;
RedNetherBrickStairsItem::~RedNetherBrickStairsItem() = default;

int RedNetherBrickStairsItem::getID() const {
  return 583;
}

std::shared_ptr<Item> RedNetherBrickStairsItem::clone() const {
  return std::make_shared<RedNetherBrickStairsItem>();
}

int RedNetherBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedNetherBrickStairsBlock().getId();
}