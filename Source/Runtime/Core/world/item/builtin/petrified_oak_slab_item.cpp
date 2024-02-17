
#include "petrified_oak_slab_item.h"

#include "../../block/builtin/petrified_oak_slab_block.h"

PetrifiedOakSlabItem::PetrifiedOakSlabItem() = default;
PetrifiedOakSlabItem::~PetrifiedOakSlabItem() = default;

int PetrifiedOakSlabItem::getID() const {
  return 227;
}

std::shared_ptr<Item> PetrifiedOakSlabItem::clone() const {
  return std::make_shared<PetrifiedOakSlabItem>();
}

int PetrifiedOakSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PetrifiedOakSlabBlock().getId();
}