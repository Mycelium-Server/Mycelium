
#include "deepslate_tile_stairs_item.h"

#include "../../block/builtin/deepslate_tile_stairs_block.h"

DeepslateTileStairsItem::DeepslateTileStairsItem() = default;
DeepslateTileStairsItem::~DeepslateTileStairsItem() = default;

int DeepslateTileStairsItem::getID() const {
  return 589;
}

std::shared_ptr<Item> DeepslateTileStairsItem::clone() const {
  return std::make_shared<DeepslateTileStairsItem>();
}

int DeepslateTileStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateTileStairsBlock().getId();
}