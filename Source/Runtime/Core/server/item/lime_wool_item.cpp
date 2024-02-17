
#include "lime_wool_item.h"

#include "../block/lime_wool_block.h"

LimeWoolItem::LimeWoolItem() = default;
LimeWoolItem::~LimeWoolItem() = default;

int LimeWoolItem::getID() const {
  return 172;
}

std::shared_ptr<Item> LimeWoolItem::clone() const {
  return std::make_shared<LimeWoolItem>();
}

int LimeWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeWoolBlock().getId();
}