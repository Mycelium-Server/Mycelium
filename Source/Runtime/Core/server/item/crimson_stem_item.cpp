
#include "crimson_stem_item.h"

#include "../block/crimson_stem_block.h"

CrimsonStemItem::CrimsonStemItem() = default;
CrimsonStemItem::~CrimsonStemItem() = default;

int CrimsonStemItem::getID() const {
  return 113;
}

std::shared_ptr<Item> CrimsonStemItem::clone() const {
  return std::make_shared<CrimsonStemItem>();
}

int CrimsonStemItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonStemBlock().getId();
}