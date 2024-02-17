
#include "rose_bush_item.h"

#include "../block/rose_bush_block.h"

RoseBushItem::RoseBushItem() = default;
RoseBushItem::~RoseBushItem() = default;

int RoseBushItem::getID() const {
  return 419;
}

std::shared_ptr<Item> RoseBushItem::clone() const {
  return std::make_shared<RoseBushItem>();
}

int RoseBushItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RoseBushBlock().getId();
}