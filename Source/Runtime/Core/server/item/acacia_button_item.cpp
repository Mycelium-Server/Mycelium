
#include "acacia_button_item.h"

#include "../block/acacia_button_block.h"

AcaciaButtonItem::AcaciaButtonItem() = default;
AcaciaButtonItem::~AcaciaButtonItem() = default;

int AcaciaButtonItem::getID() const {
  return 638;
}

std::shared_ptr<Item> AcaciaButtonItem::clone() const {
  return std::make_shared<AcaciaButtonItem>();
}
int AcaciaButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &face, const Vector3f &, bool) const {
  AcaciaButtonBlock block;
  block.powered = AcaciaButtonBlock::POWERED_FALSE;

  switch (face) {
    case BlockFace::DIRECTION_UP:
      block.face = AcaciaButtonBlock::FACE_CEILING;
      block.facing = AcaciaButtonBlock::FACING_NORTH;
      break;

    case BlockFace::DIRECTION_WEST:
      block.face = AcaciaButtonBlock::FACE_WALL;
      block.facing = AcaciaButtonBlock::FACING_WEST;
      break;

    case BlockFace::DIRECTION_SOUTH:
      block.face = AcaciaButtonBlock::FACE_WALL;
      block.facing = AcaciaButtonBlock::FACING_SOUTH;
      break;

    case BlockFace::DIRECTION_NORTH:
      block.face = AcaciaButtonBlock::FACE_WALL;
      block.facing = AcaciaButtonBlock::FACING_NORTH;
      break;

    case BlockFace::DIRECTION_EAST:
      block.face = AcaciaButtonBlock::FACE_WALL;
      block.facing = AcaciaButtonBlock::FACING_EAST;
      break;

    case BlockFace::DIRECTION_DOWN:
      block.face = AcaciaButtonBlock::FACE_FLOOR;
      block.facing = AcaciaButtonBlock::FACING_NORTH;
      break;
  }

  return block.getId();
}
