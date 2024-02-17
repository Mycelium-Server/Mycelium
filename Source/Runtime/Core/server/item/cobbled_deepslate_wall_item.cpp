
#include "cobbled_deepslate_wall_item.h"

#include "../block/cobbled_deepslate_wall_block.h"

CobbledDeepslateWallItem::CobbledDeepslateWallItem() = default;
CobbledDeepslateWallItem::~CobbledDeepslateWallItem() = default;

int CobbledDeepslateWallItem::getID() const {
  return 367;
}

std::shared_ptr<Item> CobbledDeepslateWallItem::clone() const {
  return std::make_shared<CobbledDeepslateWallItem>();
}

int CobbledDeepslateWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobbledDeepslateWallBlock().getId();
}