
#include "waxed_cut_copper_stairs_item.h"

#include "../../block/builtin/waxed_cut_copper_stairs_block.h"

WaxedCutCopperStairsItem::WaxedCutCopperStairsItem() = default;
WaxedCutCopperStairsItem::~WaxedCutCopperStairsItem() = default;

int WaxedCutCopperStairsItem::getID() const {
  return 96;
}

std::shared_ptr<Item> WaxedCutCopperStairsItem::clone() const {
  return std::make_shared<WaxedCutCopperStairsItem>();
}

int WaxedCutCopperStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedCutCopperStairsBlock().getId();
}