
#include "lever_item.h"

#include "../block/lever_block.h"

LeverItem::LeverItem() = default;
LeverItem::~LeverItem() = default;

int LeverItem::getID() const {
  return 623;
}

std::shared_ptr<Item> LeverItem::clone() const {
  return std::make_shared<LeverItem>();
}

int LeverItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LeverBlock().getId();
}