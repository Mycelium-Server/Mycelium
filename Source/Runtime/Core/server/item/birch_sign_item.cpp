
#include "birch_sign_item.h"

#include "../block/birch_sign_block.h"

BirchSignItem::BirchSignItem() = default;
BirchSignItem::~BirchSignItem() = default;

int BirchSignItem::getID() const {
  return 806;
}

std::shared_ptr<Item> BirchSignItem::clone() const {
  return std::make_shared<BirchSignItem>();
}

int BirchSignItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchSignBlock().getId();
}
