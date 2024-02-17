
#include "iron_bars_item.h"

#include "../../block/builtin/iron_bars_block.h"

IronBarsItem::IronBarsItem() = default;
IronBarsItem::~IronBarsItem() = default;

int IronBarsItem::getID() const {
  return 310;
}

std::shared_ptr<Item> IronBarsItem::clone() const {
  return std::make_shared<IronBarsItem>();
}

int IronBarsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return IronBarsBlock().getId();
}
