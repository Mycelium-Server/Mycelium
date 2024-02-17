
#include "mangrove_door_item.h"

#include "../../block/builtin/mangrove_door_block.h"

MangroveDoorItem::MangroveDoorItem() = default;
MangroveDoorItem::~MangroveDoorItem() = default;

int MangroveDoorItem::getID() const {
  return 663;
}

std::shared_ptr<Item> MangroveDoorItem::clone() const {
  return std::make_shared<MangroveDoorItem>();
}

int MangroveDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveDoorBlock().getId();
}