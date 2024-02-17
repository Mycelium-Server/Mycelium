
#include "polished_andesite_slab_item.h"

#include "../../block/builtin/polished_andesite_slab_block.h"

PolishedAndesiteSlabItem::PolishedAndesiteSlabItem() = default;
PolishedAndesiteSlabItem::~PolishedAndesiteSlabItem() = default;

int PolishedAndesiteSlabItem::getID() const {
  return 601;
}

std::shared_ptr<Item> PolishedAndesiteSlabItem::clone() const {
  return std::make_shared<PolishedAndesiteSlabItem>();
}

int PolishedAndesiteSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedAndesiteSlabBlock().getId();
}