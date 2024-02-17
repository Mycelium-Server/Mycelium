
#include "glass_item.h"

#include "../../block/builtin/glass_block.h"

GlassItem::GlassItem() = default;
GlassItem::~GlassItem() = default;

int GlassItem::getID() const {
  return 153;
}

std::shared_ptr<Item> GlassItem::clone() const {
  return std::make_shared<GlassItem>();
}

int GlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GlassBlock().getId();
}