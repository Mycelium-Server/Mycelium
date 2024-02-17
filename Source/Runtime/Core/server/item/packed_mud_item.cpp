
#include "packed_mud_item.h"

#include "../block/packed_mud_block.h"

PackedMudItem::PackedMudItem() = default;
PackedMudItem::~PackedMudItem() = default;

int PackedMudItem::getID() const {
  return 299;
}

std::shared_ptr<Item> PackedMudItem::clone() const {
  return std::make_shared<PackedMudItem>();
}

int PackedMudItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PackedMudBlock().getId();
}