
#include "honeycomb_block_item.h"

#include "../block/honeycomb_block_block.h"

HoneycombBlockItem::HoneycombBlockItem() = default;
HoneycombBlockItem::~HoneycombBlockItem() = default;

int HoneycombBlockItem::getID() const {
  return 1109;
}

std::shared_ptr<Item> HoneycombBlockItem::clone() const {
  return std::make_shared<HoneycombBlockItem>();
}

int HoneycombBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HoneycombBlockBlock().getId();
}
