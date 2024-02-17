
#include "mangrove_slab_item.h"

#include "../../block/builtin/mangrove_slab_block.h"

MangroveSlabItem::MangroveSlabItem() = default;
MangroveSlabItem::~MangroveSlabItem() = default;

int MangroveSlabItem::getID() const {
  return 220;
}

std::shared_ptr<Item> MangroveSlabItem::clone() const {
  return std::make_shared<MangroveSlabItem>();
}

int MangroveSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveSlabBlock().getId();
}
