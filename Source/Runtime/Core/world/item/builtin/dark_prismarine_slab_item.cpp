
#include "dark_prismarine_slab_item.h"

#include "../../block/builtin/dark_prismarine_slab_block.h"

DarkPrismarineSlabItem::DarkPrismarineSlabItem() = default;
DarkPrismarineSlabItem::~DarkPrismarineSlabItem() = default;

int DarkPrismarineSlabItem::getID() const {
  return 239;
}

std::shared_ptr<Item> DarkPrismarineSlabItem::clone() const {
  return std::make_shared<DarkPrismarineSlabItem>();
}

int DarkPrismarineSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkPrismarineSlabBlock().getId();
}
