
#include "spruce_door_item.h"

#include "../block/spruce_door_block.h"

SpruceDoorItem::SpruceDoorItem() = default;
SpruceDoorItem::~SpruceDoorItem() = default;

int SpruceDoorItem::getID() const {
  return 658;
}

std::shared_ptr<Item> SpruceDoorItem::clone() const {
  return std::make_shared<SpruceDoorItem>();
}

int SpruceDoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceDoorBlock().getId();
}