
#include "lectern_item.h"

#include "../block/lectern_block.h"

LecternItem::LecternItem() = default;
LecternItem::~LecternItem() = default;

int LecternItem::getID() const {
  return 621;
}

std::shared_ptr<Item> LecternItem::clone() const {
  return std::make_shared<LecternItem>();
}

int LecternItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LecternBlock().getId();
}