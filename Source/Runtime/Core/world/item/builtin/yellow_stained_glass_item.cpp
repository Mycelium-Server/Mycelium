
#include "yellow_stained_glass_item.h"

#include "../../block/builtin/yellow_stained_glass_block.h"

YellowStainedGlassItem::YellowStainedGlassItem() = default;
YellowStainedGlassItem::~YellowStainedGlassItem() = default;

int YellowStainedGlassItem::getID() const {
  return 427;
}

std::shared_ptr<Item> YellowStainedGlassItem::clone() const {
  return std::make_shared<YellowStainedGlassItem>();
}

int YellowStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowStainedGlassBlock().getId();
}