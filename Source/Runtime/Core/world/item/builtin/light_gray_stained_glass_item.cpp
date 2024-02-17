
#include "light_gray_stained_glass_item.h"

#include "../../block/builtin/light_gray_stained_glass_block.h"

LightGrayStainedGlassItem::LightGrayStainedGlassItem() = default;
LightGrayStainedGlassItem::~LightGrayStainedGlassItem() = default;

int LightGrayStainedGlassItem::getID() const {
  return 431;
}

std::shared_ptr<Item> LightGrayStainedGlassItem::clone() const {
  return std::make_shared<LightGrayStainedGlassItem>();
}

int LightGrayStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayStainedGlassBlock().getId();
}