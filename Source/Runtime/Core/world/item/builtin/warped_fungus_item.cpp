
#include "warped_fungus_item.h"

#include "../../block/builtin/warped_fungus_block.h"

WarpedFungusItem::WarpedFungusItem() = default;
WarpedFungusItem::~WarpedFungusItem() = default;

int WarpedFungusItem::getID() const {
  return 200;
}

std::shared_ptr<Item> WarpedFungusItem::clone() const {
  return std::make_shared<WarpedFungusItem>();
}

int WarpedFungusItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedFungusBlock().getId();
}