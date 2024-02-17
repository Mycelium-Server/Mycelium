
#include "cobbled_deepslate_item.h"

#include "../../block/builtin/cobbled_deepslate_block.h"

CobbledDeepslateItem::CobbledDeepslateItem() = default;
CobbledDeepslateItem::~CobbledDeepslateItem() = default;

int CobbledDeepslateItem::getID() const {
  return 9;
}

std::shared_ptr<Item> CobbledDeepslateItem::clone() const {
  return std::make_shared<CobbledDeepslateItem>();
}

int CobbledDeepslateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobbledDeepslateBlock().getId();
}