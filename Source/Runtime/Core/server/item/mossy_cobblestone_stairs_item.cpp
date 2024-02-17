
#include "mossy_cobblestone_stairs_item.h"

#include "../block/mossy_cobblestone_stairs_block.h"

MossyCobblestoneStairsItem::MossyCobblestoneStairsItem() = default;
MossyCobblestoneStairsItem::~MossyCobblestoneStairsItem() = default;

int MossyCobblestoneStairsItem::getID() const {
  return 576;
}

std::shared_ptr<Item> MossyCobblestoneStairsItem::clone() const {
  return std::make_shared<MossyCobblestoneStairsItem>();
}

int MossyCobblestoneStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossyCobblestoneStairsBlock().getId();
}