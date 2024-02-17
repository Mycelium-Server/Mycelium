
#include "birch_trapdoor_item.h"

#include "../block/birch_trapdoor_block.h"

BirchTrapdoorItem::BirchTrapdoorItem() = default;
BirchTrapdoorItem::~BirchTrapdoorItem() = default;

int BirchTrapdoorItem::getID() const {
  return 669;
}

std::shared_ptr<Item> BirchTrapdoorItem::clone() const {
  return std::make_shared<BirchTrapdoorItem>();
}

int BirchTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchTrapdoorBlock().getId();
}
