
#include "smooth_red_sandstone_item.h"

#include "../../block/builtin/smooth_red_sandstone_block.h"

SmoothRedSandstoneItem::SmoothRedSandstoneItem() = default;
SmoothRedSandstoneItem::~SmoothRedSandstoneItem() = default;

int SmoothRedSandstoneItem::getID() const {
  return 241;
}

std::shared_ptr<Item> SmoothRedSandstoneItem::clone() const {
  return std::make_shared<SmoothRedSandstoneItem>();
}

int SmoothRedSandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothRedSandstoneBlock().getId();
}