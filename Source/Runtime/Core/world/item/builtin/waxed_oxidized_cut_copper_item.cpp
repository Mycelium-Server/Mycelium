
#include "waxed_oxidized_cut_copper_item.h"

#include "../../block/builtin/waxed_oxidized_cut_copper_block.h"

WaxedOxidizedCutCopperItem::WaxedOxidizedCutCopperItem() = default;
WaxedOxidizedCutCopperItem::~WaxedOxidizedCutCopperItem() = default;

int WaxedOxidizedCutCopperItem::getID() const {
  return 95;
}

std::shared_ptr<Item> WaxedOxidizedCutCopperItem::clone() const {
  return std::make_shared<WaxedOxidizedCutCopperItem>();
}

int WaxedOxidizedCutCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedOxidizedCutCopperBlock().getId();
}