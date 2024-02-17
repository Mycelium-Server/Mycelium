
#include "smooth_quartz_item.h"

#include "../block/smooth_quartz_block.h"

SmoothQuartzItem::SmoothQuartzItem() = default;
SmoothQuartzItem::~SmoothQuartzItem() = default;

int SmoothQuartzItem::getID() const {
  return 240;
}

std::shared_ptr<Item> SmoothQuartzItem::clone() const {
  return std::make_shared<SmoothQuartzItem>();
}

int SmoothQuartzItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothQuartzBlock().getId();
}
