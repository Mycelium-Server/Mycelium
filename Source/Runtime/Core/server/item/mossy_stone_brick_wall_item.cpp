
#include "mossy_stone_brick_wall_item.h"

#include "../block/mossy_stone_brick_wall_block.h"

MossyStoneBrickWallItem::MossyStoneBrickWallItem() = default;
MossyStoneBrickWallItem::~MossyStoneBrickWallItem() = default;

int MossyStoneBrickWallItem::getID() const {
  return 354;
}

std::shared_ptr<Item> MossyStoneBrickWallItem::clone() const {
  return std::make_shared<MossyStoneBrickWallItem>();
}

int MossyStoneBrickWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossyStoneBrickWallBlock().getId();
}