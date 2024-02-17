
#include "loom_item.h"

#include "../../block/builtin/loom_block.h"

LoomItem::LoomItem() = default;
LoomItem::~LoomItem() = default;

int LoomItem::getID() const {
  return 1080;
}

std::shared_ptr<Item> LoomItem::clone() const {
  return std::make_shared<LoomItem>();
}

int LoomItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LoomBlock().getId();
}