
#include "smooth_basalt_item.h"

#include "../../block/builtin/smooth_basalt_block.h"

SmoothBasaltItem::SmoothBasaltItem() = default;
SmoothBasaltItem::~SmoothBasaltItem() = default;

int SmoothBasaltItem::getID() const {
  return 285;
}

std::shared_ptr<Item> SmoothBasaltItem::clone() const {
  return std::make_shared<SmoothBasaltItem>();
}

int SmoothBasaltItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothBasaltBlock().getId();
}
