
#include "waxed_exposed_cut_copper_stairs_item.h"

#include "../../block/builtin/waxed_exposed_cut_copper_stairs_block.h"

WaxedExposedCutCopperStairsItem::WaxedExposedCutCopperStairsItem() = default;
WaxedExposedCutCopperStairsItem::~WaxedExposedCutCopperStairsItem() = default;

int WaxedExposedCutCopperStairsItem::getID() const {
  return 97;
}

std::shared_ptr<Item> WaxedExposedCutCopperStairsItem::clone() const {
  return std::make_shared<WaxedExposedCutCopperStairsItem>();
}

int WaxedExposedCutCopperStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedExposedCutCopperStairsBlock().getId();
}