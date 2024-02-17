
#include "lantern_item.h"

#include "../block/lantern_block.h"

LanternItem::LanternItem() = default;
LanternItem::~LanternItem() = default;

int LanternItem::getID() const {
  return 1098;
}

std::shared_ptr<Item> LanternItem::clone() const {
  return std::make_shared<LanternItem>();
}

int LanternItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LanternBlock().getId();
}