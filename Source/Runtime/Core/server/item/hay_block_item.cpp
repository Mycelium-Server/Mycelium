
#include "hay_block_item.h"

#include "../block/hay_block_block.h"

HayBlockItem::HayBlockItem() = default;
HayBlockItem::~HayBlockItem() = default;

int HayBlockItem::getID() const {
  return 397;
}

std::shared_ptr<Item> HayBlockItem::clone() const {
  return std::make_shared<HayBlockItem>();
}

int HayBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HayBlockBlock().getId();
}
