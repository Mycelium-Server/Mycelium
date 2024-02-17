
#include "mossy_stone_brick_stairs_item.h"

#include "../../block/builtin/mossy_stone_brick_stairs_block.h"

MossyStoneBrickStairsItem::MossyStoneBrickStairsItem() = default;
MossyStoneBrickStairsItem::~MossyStoneBrickStairsItem() = default;

int MossyStoneBrickStairsItem::getID() const {
  return 574;
}

std::shared_ptr<Item> MossyStoneBrickStairsItem::clone() const {
  return std::make_shared<MossyStoneBrickStairsItem>();
}

int MossyStoneBrickStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossyStoneBrickStairsBlock().getId();
}