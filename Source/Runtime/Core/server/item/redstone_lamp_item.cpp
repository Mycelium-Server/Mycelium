
#include "redstone_lamp_item.h"

#include "../block/redstone_lamp_block.h"

RedstoneLampItem::RedstoneLampItem() = default;
RedstoneLampItem::~RedstoneLampItem() = default;

int RedstoneLampItem::getID() const {
  return 630;
}

std::shared_ptr<Item> RedstoneLampItem::clone() const {
  return std::make_shared<RedstoneLampItem>();
}

int RedstoneLampItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedstoneLampBlock().getId();
}