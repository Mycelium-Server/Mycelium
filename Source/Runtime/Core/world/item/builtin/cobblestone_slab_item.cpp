
#include "cobblestone_slab_item.h"

#include "../../block/builtin/cobblestone_slab_block.h"

CobblestoneSlabItem::CobblestoneSlabItem() = default;
CobblestoneSlabItem::~CobblestoneSlabItem() = default;

int CobblestoneSlabItem::getID() const {
  return 228;
}

std::shared_ptr<Item> CobblestoneSlabItem::clone() const {
  return std::make_shared<CobblestoneSlabItem>();
}

int CobblestoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobblestoneSlabBlock().getId();
}
