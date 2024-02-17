
#include "blue_stained_glass_item.h"

#include "../block/blue_stained_glass_block.h"

BlueStainedGlassItem::BlueStainedGlassItem() = default;
BlueStainedGlassItem::~BlueStainedGlassItem() = default;

int BlueStainedGlassItem::getID() const {
  return 434;
}

std::shared_ptr<Item> BlueStainedGlassItem::clone() const {
  return std::make_shared<BlueStainedGlassItem>();
}

int BlueStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueStainedGlassBlock().getId();
}