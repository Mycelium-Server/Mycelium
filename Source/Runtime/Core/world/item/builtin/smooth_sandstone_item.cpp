
#include "smooth_sandstone_item.h"

#include "../../block/builtin/smooth_sandstone_block.h"

SmoothSandstoneItem::SmoothSandstoneItem() = default;
SmoothSandstoneItem::~SmoothSandstoneItem() = default;

int SmoothSandstoneItem::getID() const {
  return 242;
}

std::shared_ptr<Item> SmoothSandstoneItem::clone() const {
  return std::make_shared<SmoothSandstoneItem>();
}

int SmoothSandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothSandstoneBlock().getId();
}
