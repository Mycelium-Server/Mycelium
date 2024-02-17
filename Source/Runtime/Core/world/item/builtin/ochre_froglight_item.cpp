
#include "ochre_froglight_item.h"

#include "../../block/builtin/ochre_froglight_block.h"

OchreFroglightItem::OchreFroglightItem() = default;
OchreFroglightItem::~OchreFroglightItem() = default;

int OchreFroglightItem::getID() const {
  return 1147;
}

std::shared_ptr<Item> OchreFroglightItem::clone() const {
  return std::make_shared<OchreFroglightItem>();
}

int OchreFroglightItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OchreFroglightBlock().getId();
}