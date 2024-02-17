
#include "white_stained_glass_item.h"

#include "../block/white_stained_glass_block.h"

WhiteStainedGlassItem::WhiteStainedGlassItem() = default;
WhiteStainedGlassItem::~WhiteStainedGlassItem() = default;

int WhiteStainedGlassItem::getID() const {
  return 423;
}

std::shared_ptr<Item> WhiteStainedGlassItem::clone() const {
  return std::make_shared<WhiteStainedGlassItem>();
}

int WhiteStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteStainedGlassBlock().getId();
}
