
#include "brown_stained_glass_item.h"

#include "../block/brown_stained_glass_block.h"

BrownStainedGlassItem::BrownStainedGlassItem() = default;
BrownStainedGlassItem::~BrownStainedGlassItem() = default;

int BrownStainedGlassItem::getID() const {
  return 435;
}

std::shared_ptr<Item> BrownStainedGlassItem::clone() const {
  return std::make_shared<BrownStainedGlassItem>();
}

int BrownStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownStainedGlassBlock().getId();
}
