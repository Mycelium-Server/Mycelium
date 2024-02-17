
#include "cyan_concrete_powder_item.h"

#include "../block/cyan_concrete_powder_block.h"

CyanConcretePowderItem::CyanConcretePowderItem() = default;
CyanConcretePowderItem::~CyanConcretePowderItem() = default;

int CyanConcretePowderItem::getID() const {
  return 532;
}

std::shared_ptr<Item> CyanConcretePowderItem::clone() const {
  return std::make_shared<CyanConcretePowderItem>();
}

int CyanConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanConcretePowderBlock().getId();
}