
#include "stripped_warped_stem_item.h"

#include "../../block/builtin/stripped_warped_stem_block.h"

StrippedWarpedStemItem::StrippedWarpedStemItem() = default;
StrippedWarpedStemItem::~StrippedWarpedStemItem() = default;

int StrippedWarpedStemItem::getID() const {
  return 123;
}

std::shared_ptr<Item> StrippedWarpedStemItem::clone() const {
  return std::make_shared<StrippedWarpedStemItem>();
}

int StrippedWarpedStemItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedWarpedStemBlock().getId();
}