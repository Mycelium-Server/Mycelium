
#include "light_gray_stained_glass_pane_item.h"

#include "../block/light_gray_stained_glass_pane_block.h"

LightGrayStainedGlassPaneItem::LightGrayStainedGlassPaneItem() = default;
LightGrayStainedGlassPaneItem::~LightGrayStainedGlassPaneItem() = default;

int LightGrayStainedGlassPaneItem::getID() const {
  return 447;
}

std::shared_ptr<Item> LightGrayStainedGlassPaneItem::clone() const {
  return std::make_shared<LightGrayStainedGlassPaneItem>();
}

int LightGrayStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayStainedGlassPaneBlock().getId();
}