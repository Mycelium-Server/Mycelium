
#include "waxed_oxidized_copper_item.h"

#include "../../block/builtin/waxed_oxidized_copper_block.h"

WaxedOxidizedCopperItem::WaxedOxidizedCopperItem() = default;
WaxedOxidizedCopperItem::~WaxedOxidizedCopperItem() = default;

int WaxedOxidizedCopperItem::getID() const {
  return 91;
}

std::shared_ptr<Item> WaxedOxidizedCopperItem::clone() const {
  return std::make_shared<WaxedOxidizedCopperItem>();
}

int WaxedOxidizedCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedOxidizedCopperBlock().getId();
}
