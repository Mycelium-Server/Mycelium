
#include "sea_pickle_item.h"

#include "../block/sea_pickle_block.h"

SeaPickleItem::SeaPickleItem() = default;
SeaPickleItem::~SeaPickleItem() = default;

int SeaPickleItem::getID() const {
  return 166;
}

std::shared_ptr<Item> SeaPickleItem::clone() const {
  return std::make_shared<SeaPickleItem>();
}

int SeaPickleItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SeaPickleBlock().getId();
}
