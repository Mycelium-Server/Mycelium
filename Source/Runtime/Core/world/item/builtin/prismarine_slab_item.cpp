
#include "prismarine_slab_item.h"

#include "../../block/builtin/prismarine_slab_block.h"

PrismarineSlabItem::PrismarineSlabItem() = default;
PrismarineSlabItem::~PrismarineSlabItem() = default;

int PrismarineSlabItem::getID() const {
  return 237;
}

std::shared_ptr<Item> PrismarineSlabItem::clone() const {
  return std::make_shared<PrismarineSlabItem>();
}

int PrismarineSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PrismarineSlabBlock().getId();
}