
#include "lime_stained_glass_item.h"

#include "../block/lime_stained_glass_block.h"

LimeStainedGlassItem::LimeStainedGlassItem() = default;
LimeStainedGlassItem::~LimeStainedGlassItem() = default;

int LimeStainedGlassItem::getID() const {
  return 428;
}

std::shared_ptr<Item> LimeStainedGlassItem::clone() const {
  return std::make_shared<LimeStainedGlassItem>();
}

int LimeStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeStainedGlassBlock().getId();
}