
#include "yellow_stained_glass_pane_item.h"

#include "../block/yellow_stained_glass_pane_block.h"

YellowStainedGlassPaneItem::YellowStainedGlassPaneItem() = default;
YellowStainedGlassPaneItem::~YellowStainedGlassPaneItem() = default;

int YellowStainedGlassPaneItem::getID() const {
  return 443;
}

std::shared_ptr<Item> YellowStainedGlassPaneItem::clone() const {
  return std::make_shared<YellowStainedGlassPaneItem>();
}

int YellowStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowStainedGlassPaneBlock().getId();
}