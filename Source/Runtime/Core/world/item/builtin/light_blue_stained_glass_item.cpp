
#include "light_blue_stained_glass_item.h"

#include "../../block/builtin/light_blue_stained_glass_block.h"

LightBlueStainedGlassItem::LightBlueStainedGlassItem() = default;
LightBlueStainedGlassItem::~LightBlueStainedGlassItem() = default;

int LightBlueStainedGlassItem::getID() const {
  return 426;
}

std::shared_ptr<Item> LightBlueStainedGlassItem::clone() const {
  return std::make_shared<LightBlueStainedGlassItem>();
}

int LightBlueStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueStainedGlassBlock().getId();
}