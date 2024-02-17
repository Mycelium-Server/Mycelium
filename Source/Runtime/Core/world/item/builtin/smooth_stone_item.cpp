
#include "smooth_stone_item.h"

#include "../../block/builtin/smooth_stone_block.h"

SmoothStoneItem::SmoothStoneItem() = default;
SmoothStoneItem::~SmoothStoneItem() = default;

int SmoothStoneItem::getID() const {
  return 243;
}

std::shared_ptr<Item> SmoothStoneItem::clone() const {
  return std::make_shared<SmoothStoneItem>();
}

int SmoothStoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmoothStoneBlock().getId();
}