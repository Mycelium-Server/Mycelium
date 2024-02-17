
#include "lapis_block_item.h"

#include "../block/lapis_block_block.h"

LapisBlockItem::LapisBlockItem() = default;
LapisBlockItem::~LapisBlockItem() = default;

int LapisBlockItem::getID() const {
  return 155;
}

std::shared_ptr<Item> LapisBlockItem::clone() const {
  return std::make_shared<LapisBlockItem>();
}

int LapisBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LapisBlockBlock().getId();
}