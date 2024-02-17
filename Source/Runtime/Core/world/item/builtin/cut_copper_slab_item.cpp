
#include "cut_copper_slab_item.h"

#include "../../block/builtin/cut_copper_slab_block.h"

CutCopperSlabItem::CutCopperSlabItem() = default;
CutCopperSlabItem::~CutCopperSlabItem() = default;

int CutCopperSlabItem::getID() const {
  return 84;
}

std::shared_ptr<Item> CutCopperSlabItem::clone() const {
  return std::make_shared<CutCopperSlabItem>();
}

int CutCopperSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CutCopperSlabBlock().getId();
}