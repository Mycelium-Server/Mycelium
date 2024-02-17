
#include "waxed_weathered_cut_copper_item.h"

#include "../block/waxed_weathered_cut_copper_block.h"

WaxedWeatheredCutCopperItem::WaxedWeatheredCutCopperItem() = default;
WaxedWeatheredCutCopperItem::~WaxedWeatheredCutCopperItem() = default;

int WaxedWeatheredCutCopperItem::getID() const {
  return 94;
}

std::shared_ptr<Item> WaxedWeatheredCutCopperItem::clone() const {
  return std::make_shared<WaxedWeatheredCutCopperItem>();
}

int WaxedWeatheredCutCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedWeatheredCutCopperBlock().getId();
}