
#include "cyan_wool_item.h"

#include "../block/cyan_wool_block.h"

CyanWoolItem::CyanWoolItem() = default;
CyanWoolItem::~CyanWoolItem() = default;

int CyanWoolItem::getID() const {
  return 176;
}

std::shared_ptr<Item> CyanWoolItem::clone() const {
  return std::make_shared<CyanWoolItem>();
}

int CyanWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanWoolBlock().getId();
}