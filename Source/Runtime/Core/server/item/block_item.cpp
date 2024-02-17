
#include "block_item.h"

BlockItem::BlockItem() = default;
BlockItem::~BlockItem() = default;

int BlockItem::getBlockID(World* world, const Vector3i& blockPos) const {
  return getBlockID(world, blockPos, {}, BlockFace::DIRECTION_UP, {}, false);
}

bool BlockItem::isBlockItem() const {
  return true;
}