
#include "cactus_item.h"

#include "../block/cactus_block.h"

CactusItem::CactusItem() = default;
CactusItem::~CactusItem() = default;

int CactusItem::getID() const {
  return 265;
}

std::shared_ptr<Item> CactusItem::clone() const {
  return std::make_shared<CactusItem>();
}

int CactusItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CactusBlock().getId();
}
