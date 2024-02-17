
#include "waxed_exposed_copper_item.h"

#include "../../block/builtin/waxed_exposed_copper_block.h"

WaxedExposedCopperItem::WaxedExposedCopperItem() = default;
WaxedExposedCopperItem::~WaxedExposedCopperItem() = default;

int WaxedExposedCopperItem::getID() const {
  return 89;
}

std::shared_ptr<Item> WaxedExposedCopperItem::clone() const {
  return std::make_shared<WaxedExposedCopperItem>();
}

int WaxedExposedCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedExposedCopperBlock().getId();
}