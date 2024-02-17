
#include "spruce_slab_item.h"

#include "../../block/builtin/spruce_slab_block.h"

SpruceSlabItem::SpruceSlabItem() = default;
SpruceSlabItem::~SpruceSlabItem() = default;

int SpruceSlabItem::getID() const {
  return 215;
}

std::shared_ptr<Item> SpruceSlabItem::clone() const {
  return std::make_shared<SpruceSlabItem>();
}

int SpruceSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceSlabBlock().getId();
}