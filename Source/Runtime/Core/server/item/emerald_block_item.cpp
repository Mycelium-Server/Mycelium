
#include "emerald_block_item.h"

#include "../block/emerald_block_block.h"

EmeraldBlockItem::EmeraldBlockItem() = default;
EmeraldBlockItem::~EmeraldBlockItem() = default;

int EmeraldBlockItem::getID() const {
  return 337;
}

std::shared_ptr<Item> EmeraldBlockItem::clone() const {
  return std::make_shared<EmeraldBlockItem>();
}

int EmeraldBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EmeraldBlockBlock().getId();
}