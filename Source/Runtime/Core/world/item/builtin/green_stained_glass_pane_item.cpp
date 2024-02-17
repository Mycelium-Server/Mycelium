
#include "green_stained_glass_pane_item.h"

#include "../../block/builtin/green_stained_glass_pane_block.h"

GreenStainedGlassPaneItem::GreenStainedGlassPaneItem() = default;
GreenStainedGlassPaneItem::~GreenStainedGlassPaneItem() = default;

int GreenStainedGlassPaneItem::getID() const {
  return 452;
}

std::shared_ptr<Item> GreenStainedGlassPaneItem::clone() const {
  return std::make_shared<GreenStainedGlassPaneItem>();
}

int GreenStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenStainedGlassPaneBlock().getId();
}