
#include "birch_slab_item.h"

#include "../../block/builtin/birch_slab_block.h"

BirchSlabItem::BirchSlabItem() = default;
BirchSlabItem::~BirchSlabItem() = default;

int BirchSlabItem::getID() const {
  return 216;
}

std::shared_ptr<Item> BirchSlabItem::clone() const {
  return std::make_shared<BirchSlabItem>();
}

int BirchSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchSlabBlock().getId();
}