
#include "iron_door_item.h"

#include "../../block/builtin/iron_door_block.h"

IronDoorItem::IronDoorItem() = default;
IronDoorItem::~IronDoorItem() = default;

int IronDoorItem::getID() const {
  return 656;
}

std::shared_ptr<Item> IronDoorItem::clone() const {
  return std::make_shared<IronDoorItem>();
}

int IronDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return IronDoorBlock().getId();
}
