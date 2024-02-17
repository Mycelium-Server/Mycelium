
#include "verdant_froglight_item.h"

#include "../block/verdant_froglight_block.h"

VerdantFroglightItem::VerdantFroglightItem() = default;
VerdantFroglightItem::~VerdantFroglightItem() = default;

int VerdantFroglightItem::getID() const {
  return 1148;
}

std::shared_ptr<Item> VerdantFroglightItem::clone() const {
  return std::make_shared<VerdantFroglightItem>();
}

int VerdantFroglightItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return VerdantFroglightBlock().getId();
}
