
#include "snow_block_item.h"

#include "../block/snow_block_block.h"

SnowBlockItem::SnowBlockItem() = default;
SnowBlockItem::~SnowBlockItem() = default;

int SnowBlockItem::getID() const {
  return 264;
}

std::shared_ptr<Item> SnowBlockItem::clone() const {
  return std::make_shared<SnowBlockItem>();
}

int SnowBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SnowBlockBlock().getId();
}