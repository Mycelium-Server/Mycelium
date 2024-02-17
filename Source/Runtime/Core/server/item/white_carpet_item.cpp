
#include "white_carpet_item.h"

#include "../block/white_carpet_block.h"

WhiteCarpetItem::WhiteCarpetItem() = default;
WhiteCarpetItem::~WhiteCarpetItem() = default;

int WhiteCarpetItem::getID() const {
  return 398;
}

std::shared_ptr<Item> WhiteCarpetItem::clone() const {
  return std::make_shared<WhiteCarpetItem>();
}

int WhiteCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteCarpetBlock().getId();
}