
#include "cut_red_sandstone_slab_item.h"

#include "../../block/builtin/cut_red_sandstone_slab_block.h"

CutRedSandstoneSlabItem::CutRedSandstoneSlabItem() = default;
CutRedSandstoneSlabItem::~CutRedSandstoneSlabItem() = default;

int CutRedSandstoneSlabItem::getID() const {
  return 235;
}

std::shared_ptr<Item> CutRedSandstoneSlabItem::clone() const {
  return std::make_shared<CutRedSandstoneSlabItem>();
}

int CutRedSandstoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CutRedSandstoneSlabBlock().getId();
}