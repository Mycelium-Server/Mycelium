
#include "acacia_log_item.h"

#include "../block/acacia_log_block.h"

AcaciaLogItem::AcaciaLogItem() = default;
AcaciaLogItem::~AcaciaLogItem() = default;

int AcaciaLogItem::getID() const {
  return 108;
}

std::shared_ptr<Item> AcaciaLogItem::clone() const {
  return std::make_shared<AcaciaLogItem>();
}

int AcaciaLogItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &face, const Vector3f &, bool) const {
  AcaciaLogBlock block;

  switch (face) {
    case BlockFace::DIRECTION_UP:
    case BlockFace::DIRECTION_DOWN:
      block.axis = AcaciaLogBlock::AXIS_Y;
      break;

    case BlockFace::DIRECTION_NORTH:
    case BlockFace::DIRECTION_SOUTH:
      block.axis = AcaciaLogBlock::AXIS_Z;
      break;

    case BlockFace::DIRECTION_WEST:
    case BlockFace::DIRECTION_EAST:
      block.axis = AcaciaLogBlock::AXIS_X;
      break;
  }

  return block.getId();
}
