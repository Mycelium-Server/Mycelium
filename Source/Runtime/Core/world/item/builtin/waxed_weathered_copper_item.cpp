
#include "waxed_weathered_copper_item.h"

#include "../../block/builtin/waxed_weathered_copper_block.h"

WaxedWeatheredCopperItem::WaxedWeatheredCopperItem() = default;
WaxedWeatheredCopperItem::~WaxedWeatheredCopperItem() = default;

int WaxedWeatheredCopperItem::getID() const {
  return 90;
}

std::shared_ptr<Item> WaxedWeatheredCopperItem::clone() const {
  return std::make_shared<WaxedWeatheredCopperItem>();
}

int WaxedWeatheredCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedWeatheredCopperBlock().getId();
}
