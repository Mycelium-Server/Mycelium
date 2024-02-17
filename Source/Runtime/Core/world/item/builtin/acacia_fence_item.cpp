
#include "acacia_fence_item.h"

#include "../../block/builtin/acacia_fence_block.h"
#include "../../level/world.h"

#define WATER_BLOCK 90

AcaciaFenceItem::AcaciaFenceItem() = default;
AcaciaFenceItem::~AcaciaFenceItem() = default;

int AcaciaFenceItem::getID() const {
  return 272;
}

std::shared_ptr<Item> AcaciaFenceItem::clone() const {
  return std::make_shared<AcaciaFenceItem>();
}

int AcaciaFenceItem::getBlockID(World* world, const Vector3i& blockPos, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  AcaciaFenceBlock block;

  if (world->getBlock(blockPos) == WATER_BLOCK) {
    block.waterlogged = AcaciaFenceBlock::WATERLOGGED_TRUE;
  }

  // TODO: Check neighbour blocks

  return block.getId();
}
