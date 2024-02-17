
#include "blue_stained_glass_pane_item.h"

#include "../block/blue_stained_glass_pane_block.h"

BlueStainedGlassPaneItem::BlueStainedGlassPaneItem() = default;
BlueStainedGlassPaneItem::~BlueStainedGlassPaneItem() = default;

int BlueStainedGlassPaneItem::getID() const {
  return 450;
}

std::shared_ptr<Item> BlueStainedGlassPaneItem::clone() const {
  return std::make_shared<BlueStainedGlassPaneItem>();
}

int BlueStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueStainedGlassPaneBlock().getId();
}