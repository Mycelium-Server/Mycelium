
#include "cut_sandstone_slab_item.h"

#include "../../block/builtin/cut_sandstone_slab_block.h"

CutSandstoneSlabItem::CutSandstoneSlabItem() = default;
CutSandstoneSlabItem::~CutSandstoneSlabItem() = default;

int CutSandstoneSlabItem::getID() const {
  return 226;
}

std::shared_ptr<Item> CutSandstoneSlabItem::clone() const {
  return std::make_shared<CutSandstoneSlabItem>();
}

int CutSandstoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CutSandstoneSlabBlock().getId();
}
