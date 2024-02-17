
#include "smooth_stone_slab_item.h"

#include "../block/smooth_stone_slab_block.h"

SmoothStoneSlabItem::SmoothStoneSlabItem() = default;
SmoothStoneSlabItem::~SmoothStoneSlabItem() = default;

int SmoothStoneSlabItem::getID() const {
  return 224;
}

std::shared_ptr<Item> SmoothStoneSlabItem::clone() const {
  return std::make_shared<SmoothStoneSlabItem>();
}

int SmoothStoneSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothStoneSlabBlock().getId();
}
