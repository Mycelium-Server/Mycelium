
#include "blackstone_stairs_item.h"

#include "../block/blackstone_stairs_block.h"

BlackstoneStairsItem::BlackstoneStairsItem() = default;
BlackstoneStairsItem::~BlackstoneStairsItem() = default;

int BlackstoneStairsItem::getID() const {
  return 1114;
}

std::shared_ptr<Item> BlackstoneStairsItem::clone() const {
  return std::make_shared<BlackstoneStairsItem>();
}

int BlackstoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackstoneStairsBlock().getId();
}