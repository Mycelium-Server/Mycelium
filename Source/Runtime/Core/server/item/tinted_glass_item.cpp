
#include "tinted_glass_item.h"

#include "../block/tinted_glass_block.h"

TintedGlassItem::TintedGlassItem() = default;
TintedGlassItem::~TintedGlassItem() = default;

int TintedGlassItem::getID() const {
  return 154;
}

std::shared_ptr<Item> TintedGlassItem::clone() const {
  return std::make_shared<TintedGlassItem>();
}

int TintedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TintedGlassBlock().getId();
}