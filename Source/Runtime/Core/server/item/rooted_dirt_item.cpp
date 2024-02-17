
#include "rooted_dirt_item.h"

#include "../block/rooted_dirt_block.h"

RootedDirtItem::RootedDirtItem() = default;
RootedDirtItem::~RootedDirtItem() = default;

int RootedDirtItem::getID() const {
  return 18;
}

std::shared_ptr<Item> RootedDirtItem::clone() const {
  return std::make_shared<RootedDirtItem>();
}

int RootedDirtItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RootedDirtBlock().getId();
}