
#include "weathered_cut_copper_slab_item.h"

#include "../block/weathered_cut_copper_slab_block.h"

WeatheredCutCopperSlabItem::WeatheredCutCopperSlabItem() = default;
WeatheredCutCopperSlabItem::~WeatheredCutCopperSlabItem() = default;

int WeatheredCutCopperSlabItem::getID() const {
  return 86;
}

std::shared_ptr<Item> WeatheredCutCopperSlabItem::clone() const {
  return std::make_shared<WeatheredCutCopperSlabItem>();
}

int WeatheredCutCopperSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WeatheredCutCopperSlabBlock().getId();
}