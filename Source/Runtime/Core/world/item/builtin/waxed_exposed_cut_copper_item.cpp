
#include "waxed_exposed_cut_copper_item.h"

#include "../../block/builtin/waxed_exposed_cut_copper_block.h"

WaxedExposedCutCopperItem::WaxedExposedCutCopperItem() = default;
WaxedExposedCutCopperItem::~WaxedExposedCutCopperItem() = default;

int WaxedExposedCutCopperItem::getID() const {
  return 93;
}

std::shared_ptr<Item> WaxedExposedCutCopperItem::clone() const {
  return std::make_shared<WaxedExposedCutCopperItem>();
}

int WaxedExposedCutCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedExposedCutCopperBlock().getId();
}