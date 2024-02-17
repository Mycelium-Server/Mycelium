
#include "stripped_crimson_stem_item.h"

#include "../block/stripped_crimson_stem_block.h"

StrippedCrimsonStemItem::StrippedCrimsonStemItem() = default;
StrippedCrimsonStemItem::~StrippedCrimsonStemItem() = default;

int StrippedCrimsonStemItem::getID() const {
  return 122;
}

std::shared_ptr<Item> StrippedCrimsonStemItem::clone() const {
  return std::make_shared<StrippedCrimsonStemItem>();
}

int StrippedCrimsonStemItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedCrimsonStemBlock().getId();
}
