
#include "packed_ice_item.h"

#include "../../block/builtin/packed_ice_block.h"

PackedIceItem::PackedIceItem() = default;
PackedIceItem::~PackedIceItem() = default;

int PackedIceItem::getID() const {
  return 415;
}

std::shared_ptr<Item> PackedIceItem::clone() const {
  return std::make_shared<PackedIceItem>();
}

int PackedIceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PackedIceBlock().getId();
}
