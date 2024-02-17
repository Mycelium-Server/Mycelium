
#include "pink_stained_glass_item.h"

#include "../block/pink_stained_glass_block.h"

PinkStainedGlassItem::PinkStainedGlassItem() = default;
PinkStainedGlassItem::~PinkStainedGlassItem() = default;

int PinkStainedGlassItem::getID() const {
  return 429;
}

std::shared_ptr<Item> PinkStainedGlassItem::clone() const {
  return std::make_shared<PinkStainedGlassItem>();
}

int PinkStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkStainedGlassBlock().getId();
}