
#include "wither_rose_item.h"

#include "../block/wither_rose_block.h"

WitherRoseItem::WitherRoseItem() = default;
WitherRoseItem::~WitherRoseItem() = default;

int WitherRoseItem::getID() const {
  return 195;
}

std::shared_ptr<Item> WitherRoseItem::clone() const {
  return std::make_shared<WitherRoseItem>();
}

int WitherRoseItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WitherRoseBlock().getId();
}