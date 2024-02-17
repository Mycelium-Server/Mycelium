
#include "black_wool_item.h"

#include "../block/black_wool_block.h"

BlackWoolItem::BlackWoolItem() = default;
BlackWoolItem::~BlackWoolItem() = default;

int BlackWoolItem::getID() const {
  return 182;
}

std::shared_ptr<Item> BlackWoolItem::clone() const {
  return std::make_shared<BlackWoolItem>();
}

int BlackWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackWoolBlock().getId();
}
