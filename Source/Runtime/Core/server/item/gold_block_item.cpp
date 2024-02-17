
#include "gold_block_item.h"

#include "../block/gold_block_block.h"

GoldBlockItem::GoldBlockItem() = default;
GoldBlockItem::~GoldBlockItem() = default;

int GoldBlockItem::getID() const {
  return 70;
}

std::shared_ptr<Item> GoldBlockItem::clone() const {
  return std::make_shared<GoldBlockItem>();
}

int GoldBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GoldBlockBlock().getId();
}
