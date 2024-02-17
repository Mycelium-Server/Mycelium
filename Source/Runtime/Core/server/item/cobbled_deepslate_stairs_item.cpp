
#include "cobbled_deepslate_stairs_item.h"

#include "../block/cobbled_deepslate_stairs_block.h"

CobbledDeepslateStairsItem::CobbledDeepslateStairsItem() = default;
CobbledDeepslateStairsItem::~CobbledDeepslateStairsItem() = default;

int CobbledDeepslateStairsItem::getID() const {
  return 586;
}

std::shared_ptr<Item> CobbledDeepslateStairsItem::clone() const {
  return std::make_shared<CobbledDeepslateStairsItem>();
}

int CobbledDeepslateStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobbledDeepslateStairsBlock().getId();
}