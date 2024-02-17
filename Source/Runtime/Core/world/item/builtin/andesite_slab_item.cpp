
#include "andesite_slab_item.h"

#include "../../block/builtin/andesite_slab_block.h"

AndesiteSlabItem::AndesiteSlabItem() = default;
AndesiteSlabItem::~AndesiteSlabItem() = default;

int AndesiteSlabItem::getID() const {
  return 599;
}

std::shared_ptr<Item> AndesiteSlabItem::clone() const {
  return std::make_shared<AndesiteSlabItem>();
}

int AndesiteSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AndesiteSlabBlock().getId();
}
