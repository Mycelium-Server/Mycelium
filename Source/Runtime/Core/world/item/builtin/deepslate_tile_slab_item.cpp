
#include "deepslate_tile_slab_item.h"

#include "../../block/builtin/deepslate_tile_slab_block.h"

DeepslateTileSlabItem::DeepslateTileSlabItem() = default;
DeepslateTileSlabItem::~DeepslateTileSlabItem() = default;

int DeepslateTileSlabItem::getID() const {
  return 606;
}

std::shared_ptr<Item> DeepslateTileSlabItem::clone() const {
  return std::make_shared<DeepslateTileSlabItem>();
}

int DeepslateTileSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateTileSlabBlock().getId();
}