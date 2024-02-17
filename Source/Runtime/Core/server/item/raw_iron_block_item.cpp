
#include "raw_iron_block_item.h"

#include "../block/raw_iron_block_block.h"

RawIronBlockItem::RawIronBlockItem() = default;
RawIronBlockItem::~RawIronBlockItem() = default;

int RawIronBlockItem::getID() const {
  return 63;
}

std::shared_ptr<Item> RawIronBlockItem::clone() const {
  return std::make_shared<RawIronBlockItem>();
}

int RawIronBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RawIronBlockBlock().getId();
}