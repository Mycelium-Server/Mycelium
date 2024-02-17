
#include "cyan_stained_glass_item.h"

#include "../../block/builtin/cyan_stained_glass_block.h"

CyanStainedGlassItem::CyanStainedGlassItem() = default;
CyanStainedGlassItem::~CyanStainedGlassItem() = default;

int CyanStainedGlassItem::getID() const {
  return 432;
}

std::shared_ptr<Item> CyanStainedGlassItem::clone() const {
  return std::make_shared<CyanStainedGlassItem>();
}

int CyanStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanStainedGlassBlock().getId();
}