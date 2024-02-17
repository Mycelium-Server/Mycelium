
#include "deepslate_tile_wall_item.h"

#include "../block/deepslate_tile_wall_block.h"

DeepslateTileWallItem::DeepslateTileWallItem() = default;
DeepslateTileWallItem::~DeepslateTileWallItem() = default;

int DeepslateTileWallItem::getID() const {
  return 370;
}

std::shared_ptr<Item> DeepslateTileWallItem::clone() const {
  return std::make_shared<DeepslateTileWallItem>();
}

int DeepslateTileWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateTileWallBlock().getId();
}