
#include "purpur_block_item.h"

#include "../block/purpur_block_block.h"

PurpurBlockItem::PurpurBlockItem() = default;
PurpurBlockItem::~PurpurBlockItem() = default;

int PurpurBlockItem::getID() const {
  return 252;
}

std::shared_ptr<Item> PurpurBlockItem::clone() const {
  return std::make_shared<PurpurBlockItem>();
}

int PurpurBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpurBlockBlock().getId();
}