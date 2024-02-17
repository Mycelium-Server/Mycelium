
#include "warped_nylium_item.h"

#include "../block/warped_nylium_block.h"

WarpedNyliumItem::WarpedNyliumItem() = default;
WarpedNyliumItem::~WarpedNyliumItem() = default;

int WarpedNyliumItem::getID() const {
  return 21;
}

std::shared_ptr<Item> WarpedNyliumItem::clone() const {
  return std::make_shared<WarpedNyliumItem>();
}

int WarpedNyliumItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedNyliumBlock().getId();
}