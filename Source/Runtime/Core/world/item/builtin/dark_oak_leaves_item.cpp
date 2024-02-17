
#include "dark_oak_leaves_item.h"

#include "../../block/builtin/dark_oak_leaves_block.h"

DarkOakLeavesItem::DarkOakLeavesItem() = default;
DarkOakLeavesItem::~DarkOakLeavesItem() = default;

int DarkOakLeavesItem::getID() const {
  return 147;
}

std::shared_ptr<Item> DarkOakLeavesItem::clone() const {
  return std::make_shared<DarkOakLeavesItem>();
}

int DarkOakLeavesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakLeavesBlock().getId();
}
