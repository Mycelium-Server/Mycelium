
#include "waxed_oxidized_cut_copper_stairs_item.h"

#include "../block/waxed_oxidized_cut_copper_stairs_block.h"

WaxedOxidizedCutCopperStairsItem::WaxedOxidizedCutCopperStairsItem() = default;
WaxedOxidizedCutCopperStairsItem::~WaxedOxidizedCutCopperStairsItem() = default;

int WaxedOxidizedCutCopperStairsItem::getID() const {
  return 99;
}

std::shared_ptr<Item> WaxedOxidizedCutCopperStairsItem::clone() const {
  return std::make_shared<WaxedOxidizedCutCopperStairsItem>();
}

int WaxedOxidizedCutCopperStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedOxidizedCutCopperStairsBlock().getId();
}