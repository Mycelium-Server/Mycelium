
#include "calcite_item.h"

#include "../block/calcite_block.h"

CalciteItem::CalciteItem() = default;
CalciteItem::~CalciteItem() = default;

int CalciteItem::getID() const {
  return 11;
}

std::shared_ptr<Item> CalciteItem::clone() const {
  return std::make_shared<CalciteItem>();
}

int CalciteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CalciteBlock().getId();
}
