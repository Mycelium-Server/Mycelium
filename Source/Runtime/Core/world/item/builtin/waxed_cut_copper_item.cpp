
#include "waxed_cut_copper_item.h"

#include "../../block/builtin/waxed_cut_copper_block.h"

WaxedCutCopperItem::WaxedCutCopperItem() = default;
WaxedCutCopperItem::~WaxedCutCopperItem() = default;

int WaxedCutCopperItem::getID() const {
  return 92;
}

std::shared_ptr<Item> WaxedCutCopperItem::clone() const {
  return std::make_shared<WaxedCutCopperItem>();
}

int WaxedCutCopperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WaxedCutCopperBlock().getId();
}