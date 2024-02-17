
#include "oak_door_item.h"

#include "../../block/builtin/oak_door_block.h"

OakDoorItem::OakDoorItem() = default;
OakDoorItem::~OakDoorItem() = default;

int OakDoorItem::getID() const {
  return 657;
}

std::shared_ptr<Item> OakDoorItem::clone() const {
  return std::make_shared<OakDoorItem>();
}

int OakDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakDoorBlock().getId();
}