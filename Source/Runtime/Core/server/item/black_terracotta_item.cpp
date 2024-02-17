
#include "black_terracotta_item.h"

#include "../block/black_terracotta_block.h"

BlackTerracottaItem::BlackTerracottaItem() = default;
BlackTerracottaItem::~BlackTerracottaItem() = default;

int BlackTerracottaItem::getID() const {
  return 394;
}

std::shared_ptr<Item> BlackTerracottaItem::clone() const {
  return std::make_shared<BlackTerracottaItem>();
}

int BlackTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackTerracottaBlock().getId();
}