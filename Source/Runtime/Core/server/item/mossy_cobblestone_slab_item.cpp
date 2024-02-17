
#include "mossy_cobblestone_slab_item.h"

#include "../block/mossy_cobblestone_slab_block.h"

MossyCobblestoneSlabItem::MossyCobblestoneSlabItem() = default;
MossyCobblestoneSlabItem::~MossyCobblestoneSlabItem() = default;

int MossyCobblestoneSlabItem::getID() const {
  return 594;
}

std::shared_ptr<Item> MossyCobblestoneSlabItem::clone() const {
  return std::make_shared<MossyCobblestoneSlabItem>();
}

int MossyCobblestoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossyCobblestoneSlabBlock().getId();
}
