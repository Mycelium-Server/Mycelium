
#include "purpur_slab_item.h"

#include "../block/purpur_slab_block.h"

PurpurSlabItem::PurpurSlabItem() = default;
PurpurSlabItem::~PurpurSlabItem() = default;

int PurpurSlabItem::getID() const {
  return 236;
}

std::shared_ptr<Item> PurpurSlabItem::clone() const {
  return std::make_shared<PurpurSlabItem>();
}

int PurpurSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpurSlabBlock().getId();
}