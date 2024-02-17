
#include "crimson_slab_item.h"

#include "../block/crimson_slab_block.h"

CrimsonSlabItem::CrimsonSlabItem() = default;
CrimsonSlabItem::~CrimsonSlabItem() = default;

int CrimsonSlabItem::getID() const {
  return 221;
}

std::shared_ptr<Item> CrimsonSlabItem::clone() const {
  return std::make_shared<CrimsonSlabItem>();
}

int CrimsonSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonSlabBlock().getId();
}