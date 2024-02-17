
#include "sandstone_stairs_item.h"

#include "../../block/builtin/sandstone_stairs_block.h"

SandstoneStairsItem::SandstoneStairsItem() = default;
SandstoneStairsItem::~SandstoneStairsItem() = default;

int SandstoneStairsItem::getID() const {
  return 335;
}

std::shared_ptr<Item> SandstoneStairsItem::clone() const {
  return std::make_shared<SandstoneStairsItem>();
}

int SandstoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SandstoneStairsBlock().getId();
}