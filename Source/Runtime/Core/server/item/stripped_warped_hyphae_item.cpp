
#include "stripped_warped_hyphae_item.h"

#include "../block/stripped_warped_hyphae_block.h"

StrippedWarpedHyphaeItem::StrippedWarpedHyphaeItem() = default;
StrippedWarpedHyphaeItem::~StrippedWarpedHyphaeItem() = default;

int StrippedWarpedHyphaeItem::getID() const {
  return 132;
}

std::shared_ptr<Item> StrippedWarpedHyphaeItem::clone() const {
  return std::make_shared<StrippedWarpedHyphaeItem>();
}

int StrippedWarpedHyphaeItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedWarpedHyphaeBlock().getId();
}
