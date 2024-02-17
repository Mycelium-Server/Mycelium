
#include "polished_andesite_item.h"

#include "../block/polished_andesite_block.h"

PolishedAndesiteItem::PolishedAndesiteItem() = default;
PolishedAndesiteItem::~PolishedAndesiteItem() = default;

int PolishedAndesiteItem::getID() const {
  return 7;
}

std::shared_ptr<Item> PolishedAndesiteItem::clone() const {
  return std::make_shared<PolishedAndesiteItem>();
}

int PolishedAndesiteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedAndesiteBlock().getId();
}