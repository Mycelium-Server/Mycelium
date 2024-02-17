
#include "amethyst_block_item.h"

#include "../block/amethyst_block_block.h"

AmethystBlockItem::AmethystBlockItem() = default;
AmethystBlockItem::~AmethystBlockItem() = default;

int AmethystBlockItem::getID() const {
  return 66;
}

std::shared_ptr<Item> AmethystBlockItem::clone() const {
  return std::make_shared<AmethystBlockItem>();
}

int AmethystBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AmethystBlockBlock().getId();
}