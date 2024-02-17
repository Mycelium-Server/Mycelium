
#include "stone_item.h"

#include "../block/stone_block.h"

StoneItem::StoneItem() = default;
StoneItem::~StoneItem() = default;

int StoneItem::getID() const {
  return 1;
}

std::shared_ptr<Item> StoneItem::clone() const {
  return std::make_shared<StoneItem>();
}

int StoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StoneBlock().getId();
}