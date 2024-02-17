
#include "gray_stained_glass_pane_item.h"

#include "../block/gray_stained_glass_pane_block.h"

GrayStainedGlassPaneItem::GrayStainedGlassPaneItem() = default;
GrayStainedGlassPaneItem::~GrayStainedGlassPaneItem() = default;

int GrayStainedGlassPaneItem::getID() const {
  return 446;
}

std::shared_ptr<Item> GrayStainedGlassPaneItem::clone() const {
  return std::make_shared<GrayStainedGlassPaneItem>();
}

int GrayStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayStainedGlassPaneBlock().getId();
}