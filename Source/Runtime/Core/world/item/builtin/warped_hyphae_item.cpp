
#include "warped_hyphae_item.h"

#include "../../block/builtin/warped_hyphae_block.h"

WarpedHyphaeItem::WarpedHyphaeItem() = default;
WarpedHyphaeItem::~WarpedHyphaeItem() = default;

int WarpedHyphaeItem::getID() const {
  return 141;
}

std::shared_ptr<Item> WarpedHyphaeItem::clone() const {
  return std::make_shared<WarpedHyphaeItem>();
}

int WarpedHyphaeItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedHyphaeBlock().getId();
}