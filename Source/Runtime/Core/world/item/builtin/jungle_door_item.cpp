
#include "jungle_door_item.h"

#include "../../block/builtin/jungle_door_block.h"

JungleDoorItem::JungleDoorItem() = default;
JungleDoorItem::~JungleDoorItem() = default;

int JungleDoorItem::getID() const {
  return 660;
}

std::shared_ptr<Item> JungleDoorItem::clone() const {
  return std::make_shared<JungleDoorItem>();
}

int JungleDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleDoorBlock().getId();
}