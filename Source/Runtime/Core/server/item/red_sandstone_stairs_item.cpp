
#include "red_sandstone_stairs_item.h"

#include "../block/red_sandstone_stairs_block.h"

RedSandstoneStairsItem::RedSandstoneStairsItem() = default;
RedSandstoneStairsItem::~RedSandstoneStairsItem() = default;

int RedSandstoneStairsItem::getID() const {
  return 465;
}

std::shared_ptr<Item> RedSandstoneStairsItem::clone() const {
  return std::make_shared<RedSandstoneStairsItem>();
}

int RedSandstoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedSandstoneStairsBlock().getId();
}
