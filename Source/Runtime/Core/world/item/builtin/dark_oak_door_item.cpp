
#include "dark_oak_door_item.h"

#include "../../block/builtin/dark_oak_door_block.h"

DarkOakDoorItem::DarkOakDoorItem() = default;
DarkOakDoorItem::~DarkOakDoorItem() = default;

int DarkOakDoorItem::getID() const {
  return 662;
}

std::shared_ptr<Item> DarkOakDoorItem::clone() const {
  return std::make_shared<DarkOakDoorItem>();
}

int DarkOakDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakDoorBlock().getId();
}