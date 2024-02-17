
#include "dead_bush_item.h"

#include "../block/dead_bush_block.h"

DeadBushItem::DeadBushItem() = default;
DeadBushItem::~DeadBushItem() = default;

int DeadBushItem::getID() const {
  return 164;
}

std::shared_ptr<Item> DeadBushItem::clone() const {
  return std::make_shared<DeadBushItem>();
}

int DeadBushItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeadBushBlock().getId();
}
