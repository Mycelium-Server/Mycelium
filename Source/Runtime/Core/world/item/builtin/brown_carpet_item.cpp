
#include "brown_carpet_item.h"

#include "../../block/builtin/brown_carpet_block.h"

BrownCarpetItem::BrownCarpetItem() = default;
BrownCarpetItem::~BrownCarpetItem() = default;

int BrownCarpetItem::getID() const {
  return 410;
}

std::shared_ptr<Item> BrownCarpetItem::clone() const {
  return std::make_shared<BrownCarpetItem>();
}

int BrownCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownCarpetBlock().getId();
}