
#include "green_stained_glass_item.h"

#include "../block/green_stained_glass_block.h"

GreenStainedGlassItem::GreenStainedGlassItem() = default;
GreenStainedGlassItem::~GreenStainedGlassItem() = default;

int GreenStainedGlassItem::getID() const {
  return 436;
}

std::shared_ptr<Item> GreenStainedGlassItem::clone() const {
  return std::make_shared<GreenStainedGlassItem>();
}

int GreenStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenStainedGlassBlock().getId();
}