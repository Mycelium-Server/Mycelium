
#include "cracked_polished_blackstone_bricks_item.h"

#include "../block/cracked_polished_blackstone_bricks_block.h"

CrackedPolishedBlackstoneBricksItem::CrackedPolishedBlackstoneBricksItem() = default;
CrackedPolishedBlackstoneBricksItem::~CrackedPolishedBlackstoneBricksItem() = default;

int CrackedPolishedBlackstoneBricksItem::getID() const {
  return 1123;
}

std::shared_ptr<Item> CrackedPolishedBlackstoneBricksItem::clone() const {
  return std::make_shared<CrackedPolishedBlackstoneBricksItem>();
}

int CrackedPolishedBlackstoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrackedPolishedBlackstoneBricksBlock().getId();
}