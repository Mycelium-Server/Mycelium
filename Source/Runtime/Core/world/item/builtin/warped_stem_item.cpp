
#include "warped_stem_item.h"

#include "../../block/builtin/warped_stem_block.h"

WarpedStemItem::WarpedStemItem() = default;
WarpedStemItem::~WarpedStemItem() = default;

int WarpedStemItem::getID() const {
  return 114;
}

std::shared_ptr<Item> WarpedStemItem::clone() const {
  return std::make_shared<WarpedStemItem>();
}

int WarpedStemItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedStemBlock().getId();
}