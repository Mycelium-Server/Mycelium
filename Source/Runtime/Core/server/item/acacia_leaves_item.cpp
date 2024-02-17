
#include "acacia_leaves_item.h"

#include "../block/acacia_leaves_block.h"
#include "../world/world.h"

#define WATER_BLOCK 90

AcaciaLeavesItem::AcaciaLeavesItem() = default;
AcaciaLeavesItem::~AcaciaLeavesItem() = default;

int AcaciaLeavesItem::getID() const {
  return 146;
}

std::shared_ptr<Item> AcaciaLeavesItem::clone() const {
  return std::make_shared<AcaciaLeavesItem>();
}

int AcaciaLeavesItem::getBlockID(World *world, const Vector3i &blockPos, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  AcaciaLeavesBlock block;
  // TODO: Search wood ?
  block.persistent = AcaciaLeavesBlock::PERSISTENT_TRUE;
  if (world->getBlock(blockPos) == WATER_BLOCK) {
    block.waterlogged = AcaciaLeavesBlock::WATERLOGGED_TRUE;
  }
  return block.getId();
}
