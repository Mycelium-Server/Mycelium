
#include "mushroom_stem_item.h"

#include "../block/mushroom_stem_block.h"

MushroomStemItem::MushroomStemItem() = default;
MushroomStemItem::~MushroomStemItem() = default;

int MushroomStemItem::getID() const {
  return 309;
}

std::shared_ptr<Item> MushroomStemItem::clone() const {
  return std::make_shared<MushroomStemItem>();
}

int MushroomStemItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MushroomStemBlock().getId();
}
