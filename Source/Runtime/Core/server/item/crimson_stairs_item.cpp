
#include "crimson_stairs_item.h"

#include "../block/crimson_stairs_block.h"

CrimsonStairsItem::CrimsonStairsItem() = default;
CrimsonStairsItem::~CrimsonStairsItem() = default;

int CrimsonStairsItem::getID() const {
  return 345;
}

std::shared_ptr<Item> CrimsonStairsItem::clone() const {
  return std::make_shared<CrimsonStairsItem>();
}

int CrimsonStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonStairsBlock().getId();
}