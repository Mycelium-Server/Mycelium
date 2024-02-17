
#include "stone_slab_item.h"

#include "../block/stone_slab_block.h"

StoneSlabItem::StoneSlabItem() = default;
StoneSlabItem::~StoneSlabItem() = default;

int StoneSlabItem::getID() const {
  return 223;
}

std::shared_ptr<Item> StoneSlabItem::clone() const {
  return std::make_shared<StoneSlabItem>();
}

int StoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StoneSlabBlock().getId();
}