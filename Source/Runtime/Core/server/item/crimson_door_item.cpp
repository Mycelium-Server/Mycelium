
#include "crimson_door_item.h"

#include "../block/crimson_door_block.h"

CrimsonDoorItem::CrimsonDoorItem() = default;
CrimsonDoorItem::~CrimsonDoorItem() = default;

int CrimsonDoorItem::getID() const {
  return 664;
}

std::shared_ptr<Item> CrimsonDoorItem::clone() const {
  return std::make_shared<CrimsonDoorItem>();
}

int CrimsonDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonDoorBlock().getId();
}
