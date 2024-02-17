
#include "cracked_stone_bricks_item.h"

#include "../block/cracked_stone_bricks_block.h"

CrackedStoneBricksItem::CrackedStoneBricksItem() = default;
CrackedStoneBricksItem::~CrackedStoneBricksItem() = default;

int CrackedStoneBricksItem::getID() const {
  return 297;
}

std::shared_ptr<Item> CrackedStoneBricksItem::clone() const {
  return std::make_shared<CrackedStoneBricksItem>();
}

int CrackedStoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrackedStoneBricksBlock().getId();
}
