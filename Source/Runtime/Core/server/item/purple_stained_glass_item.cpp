
#include "purple_stained_glass_item.h"

#include "../block/purple_stained_glass_block.h"

PurpleStainedGlassItem::PurpleStainedGlassItem() = default;
PurpleStainedGlassItem::~PurpleStainedGlassItem() = default;

int PurpleStainedGlassItem::getID() const {
  return 433;
}

std::shared_ptr<Item> PurpleStainedGlassItem::clone() const {
  return std::make_shared<PurpleStainedGlassItem>();
}

int PurpleStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleStainedGlassBlock().getId();
}