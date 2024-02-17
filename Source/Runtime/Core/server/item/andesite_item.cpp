
#include "andesite_item.h"

#include "../block/andesite_block.h"

AndesiteItem::AndesiteItem() = default;
AndesiteItem::~AndesiteItem() = default;

int AndesiteItem::getID() const {
  return 6;
}

std::shared_ptr<Item> AndesiteItem::clone() const {
  return std::make_shared<AndesiteItem>();
}

int AndesiteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AndesiteBlock().getId();
}