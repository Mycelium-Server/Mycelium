
#include "birch_door_item.h"

#include "../../block/builtin/birch_door_block.h"

BirchDoorItem::BirchDoorItem() = default;
BirchDoorItem::~BirchDoorItem() = default;

int BirchDoorItem::getID() const {
  return 659;
}

std::shared_ptr<Item> BirchDoorItem::clone() const {
  return std::make_shared<BirchDoorItem>();
}

int BirchDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchDoorBlock().getId();
}