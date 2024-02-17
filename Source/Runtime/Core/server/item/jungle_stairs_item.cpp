
#include "jungle_stairs_item.h"

#include "../block/jungle_stairs_block.h"

JungleStairsItem::JungleStairsItem() = default;
JungleStairsItem::~JungleStairsItem() = default;

int JungleStairsItem::getID() const {
  return 341;
}

std::shared_ptr<Item> JungleStairsItem::clone() const {
  return std::make_shared<JungleStairsItem>();
}

int JungleStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleStairsBlock().getId();
}