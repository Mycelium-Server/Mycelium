
#include "tall_grass_item.h"

#include "../../block/builtin/tall_grass_block.h"

TallGrassItem::TallGrassItem() = default;
TallGrassItem::~TallGrassItem() = default;

int TallGrassItem::getID() const {
  return 421;
}

std::shared_ptr<Item> TallGrassItem::clone() const {
  return std::make_shared<TallGrassItem>();
}

int TallGrassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TallGrassBlock().getId();
}