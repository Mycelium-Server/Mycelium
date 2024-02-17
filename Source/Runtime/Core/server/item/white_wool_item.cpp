
#include "white_wool_item.h"

#include "../block/white_wool_block.h"

WhiteWoolItem::WhiteWoolItem() = default;
WhiteWoolItem::~WhiteWoolItem() = default;

int WhiteWoolItem::getID() const {
  return 167;
}

std::shared_ptr<Item> WhiteWoolItem::clone() const {
  return std::make_shared<WhiteWoolItem>();
}

int WhiteWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteWoolBlock().getId();
}