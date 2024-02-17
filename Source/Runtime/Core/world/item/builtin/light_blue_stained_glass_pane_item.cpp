
#include "light_blue_stained_glass_pane_item.h"

#include "../../block/builtin/light_blue_stained_glass_pane_block.h"

LightBlueStainedGlassPaneItem::LightBlueStainedGlassPaneItem() = default;
LightBlueStainedGlassPaneItem::~LightBlueStainedGlassPaneItem() = default;

int LightBlueStainedGlassPaneItem::getID() const {
  return 442;
}

std::shared_ptr<Item> LightBlueStainedGlassPaneItem::clone() const {
  return std::make_shared<LightBlueStainedGlassPaneItem>();
}

int LightBlueStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueStainedGlassPaneBlock().getId();
}