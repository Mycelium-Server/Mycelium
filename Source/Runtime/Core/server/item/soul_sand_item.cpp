
#include "soul_sand_item.h"

#include "../block/soul_sand_block.h"

SoulSandItem::SoulSandItem() = default;
SoulSandItem::~SoulSandItem() = default;

int SoulSandItem::getID() const {
  return 281;
}

std::shared_ptr<Item> SoulSandItem::clone() const {
  return std::make_shared<SoulSandItem>();
}

int SoulSandItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SoulSandBlock().getId();
}