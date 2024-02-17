
#include "gray_stained_glass_item.h"

#include "../../block/builtin/gray_stained_glass_block.h"

GrayStainedGlassItem::GrayStainedGlassItem() = default;
GrayStainedGlassItem::~GrayStainedGlassItem() = default;

int GrayStainedGlassItem::getID() const {
  return 430;
}

std::shared_ptr<Item> GrayStainedGlassItem::clone() const {
  return std::make_shared<GrayStainedGlassItem>();
}

int GrayStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayStainedGlassBlock().getId();
}