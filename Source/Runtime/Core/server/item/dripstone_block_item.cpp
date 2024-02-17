
#include "dripstone_block_item.h"

#include "../block/dripstone_block_block.h"

DripstoneBlockItem::DripstoneBlockItem() = default;
DripstoneBlockItem::~DripstoneBlockItem() = default;

int DripstoneBlockItem::getID() const {
  return 13;
}

std::shared_ptr<Item> DripstoneBlockItem::clone() const {
  return std::make_shared<DripstoneBlockItem>();
}

int DripstoneBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DripstoneBlockBlock().getId();
}