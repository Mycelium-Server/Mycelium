
#include "cobbled_deepslate_slab_item.h"

#include "../../block/builtin/cobbled_deepslate_slab_block.h"

CobbledDeepslateSlabItem::CobbledDeepslateSlabItem() = default;
CobbledDeepslateSlabItem::~CobbledDeepslateSlabItem() = default;

int CobbledDeepslateSlabItem::getID() const {
  return 603;
}

std::shared_ptr<Item> CobbledDeepslateSlabItem::clone() const {
  return std::make_shared<CobbledDeepslateSlabItem>();
}

int CobbledDeepslateSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobbledDeepslateSlabBlock().getId();
}
