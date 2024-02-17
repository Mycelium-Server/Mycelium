
#include "acacia_door_item.h"

#include "../../block/builtin/acacia_door_block.h"

AcaciaDoorItem::AcaciaDoorItem() = default;
AcaciaDoorItem::~AcaciaDoorItem() = default;

int AcaciaDoorItem::getID() const {
  return 661;
}

std::shared_ptr<Item> AcaciaDoorItem::clone() const {
  return std::make_shared<AcaciaDoorItem>();
}

int AcaciaDoorItem::getBlockID(World*, const Vector3i&, const Vector3f&, const BlockFace& face, const Vector3f&, bool) const {
  AcaciaDoorBlock block;
  block.open = AcaciaDoorBlock::OPEN_FALSE;
  block.powered = AcaciaDoorBlock::POWERED_FALSE;
  block.half = face == BlockFace::DIRECTION_DOWN ? AcaciaDoorBlock::HALF_UPPER : AcaciaDoorBlock::HALF_LOWER;
  // TODO: hinge

  switch (face) {
    case BlockFace::DIRECTION_EAST:
      block.facing = AcaciaDoorBlock::FACING_EAST;
      break;

    case BlockFace::DIRECTION_NORTH:
      block.facing = AcaciaDoorBlock::FACING_NORTH;
      break;

    case BlockFace::DIRECTION_SOUTH:
      block.facing = AcaciaDoorBlock::FACING_SOUTH;
      break;

    case BlockFace::DIRECTION_WEST:
      block.facing = AcaciaDoorBlock::FACING_WEST;
      break;

    default:
      // TODO: Facing
      break;
  }

  return block.getId();
}
