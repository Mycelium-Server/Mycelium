
#include "waxed_weathered_cut_copper_stairs_item.h"

#include "../../block/builtin/waxed_weathered_cut_copper_stairs_block.h"

WaxedWeatheredCutCopperStairsItem::WaxedWeatheredCutCopperStairsItem() = default;
WaxedWeatheredCutCopperStairsItem::~WaxedWeatheredCutCopperStairsItem() = default;

int WaxedWeatheredCutCopperStairsItem::getID() const {
  return 98;
}

std::shared_ptr<Item> WaxedWeatheredCutCopperStairsItem::clone() const {
  return std::make_shared<WaxedWeatheredCutCopperStairsItem>();
}

int WaxedWeatheredCutCopperStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedWeatheredCutCopperStairsBlock().getId();
}