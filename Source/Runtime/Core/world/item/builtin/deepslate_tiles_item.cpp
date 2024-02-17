
#include "deepslate_tiles_item.h"

#include "../../block/builtin/deepslate_tiles_block.h"

DeepslateTilesItem::DeepslateTilesItem() = default;
DeepslateTilesItem::~DeepslateTilesItem() = default;

int DeepslateTilesItem::getID() const {
  return 303;
}

std::shared_ptr<Item> DeepslateTilesItem::clone() const {
  return std::make_shared<DeepslateTilesItem>();
}

int DeepslateTilesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateTilesBlock().getId();
}