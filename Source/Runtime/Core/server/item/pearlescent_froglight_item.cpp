
#include "pearlescent_froglight_item.h"

#include "../block/pearlescent_froglight_block.h"

PearlescentFroglightItem::PearlescentFroglightItem() = default;
PearlescentFroglightItem::~PearlescentFroglightItem() = default;

int PearlescentFroglightItem::getID() const {
  return 1149;
}

std::shared_ptr<Item> PearlescentFroglightItem::clone() const {
  return std::make_shared<PearlescentFroglightItem>();
}

int PearlescentFroglightItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PearlescentFroglightBlock().getId();
}