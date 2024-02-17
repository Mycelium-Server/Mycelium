
#include "exposed_cut_copper_slab_item.h"

#include "../block/exposed_cut_copper_slab_block.h"

ExposedCutCopperSlabItem::ExposedCutCopperSlabItem() = default;
ExposedCutCopperSlabItem::~ExposedCutCopperSlabItem() = default;

int ExposedCutCopperSlabItem::getID() const {
  return 85;
}

std::shared_ptr<Item> ExposedCutCopperSlabItem::clone() const {
  return std::make_shared<ExposedCutCopperSlabItem>();
}

int ExposedCutCopperSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ExposedCutCopperSlabBlock().getId();
}
