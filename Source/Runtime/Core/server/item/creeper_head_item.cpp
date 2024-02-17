
#include "creeper_head_item.h"

#include "../block/creeper_head_block.h"

CreeperHeadItem::CreeperHeadItem() = default;
CreeperHeadItem::~CreeperHeadItem() = default;

int CreeperHeadItem::getID() const {
  return 1000;
}

std::shared_ptr<Item> CreeperHeadItem::clone() const {
  return std::make_shared<CreeperHeadItem>();
}

int CreeperHeadItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CreeperHeadBlock().getId();
}