
#include "pink_stained_glass_pane_item.h"

#include "../block/pink_stained_glass_pane_block.h"

PinkStainedGlassPaneItem::PinkStainedGlassPaneItem() = default;
PinkStainedGlassPaneItem::~PinkStainedGlassPaneItem() = default;

int PinkStainedGlassPaneItem::getID() const {
  return 445;
}

std::shared_ptr<Item> PinkStainedGlassPaneItem::clone() const {
  return std::make_shared<PinkStainedGlassPaneItem>();
}

int PinkStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkStainedGlassPaneBlock().getId();
}