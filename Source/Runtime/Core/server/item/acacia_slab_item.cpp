
#include "acacia_slab_item.h"

#include "../block/acacia_slab_block.h"
#include "../world/world.h"

#define WATER_BLOCK 90
#define ACACIA_SLAB_MIN 9065
#define ACACIA_SLAB_MAX 9070

AcaciaSlabItem::AcaciaSlabItem() = default;
AcaciaSlabItem::~AcaciaSlabItem() = default;

int AcaciaSlabItem::getID() const {
  return 218;
}

std::shared_ptr<Item> AcaciaSlabItem::clone() const {
  return std::make_shared<AcaciaSlabItem>();
}

int AcaciaSlabItem::getBlockID(World *world, const Vector3i &blockPos, const Vector3f &, const BlockFace &face, const Vector3f &, bool) const {
  AcaciaSlabBlock block;

  int state = world->getBlock(blockPos);

  if (state == WATER_BLOCK) {
    block.waterlogged = AcaciaSlabBlock::WATERLOGGED_TRUE;
  } else if(state >= ACACIA_SLAB_MIN && state <= ACACIA_SLAB_MAX) {
    block.type = AcaciaSlabBlock::TYPE_DOUBLE;
  } else {
    switch (face) {
      case BlockFace::DIRECTION_DOWN:
        block.type = AcaciaSlabBlock::TYPE_TOP;
        break;

      case BlockFace::DIRECTION_UP:
        block.type = AcaciaSlabBlock::TYPE_BOTTOM;
        break;

      default:
        // TODO: Type from direction
        break;
    }
  }

  return block.getId();
}
