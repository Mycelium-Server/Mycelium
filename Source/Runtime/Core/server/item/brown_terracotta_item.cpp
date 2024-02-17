
#include "brown_terracotta_item.h"

#include "../block/brown_terracotta_block.h"

BrownTerracottaItem::BrownTerracottaItem() = default;
BrownTerracottaItem::~BrownTerracottaItem() = default;

int BrownTerracottaItem::getID() const {
  return 391;
}

std::shared_ptr<Item> BrownTerracottaItem::clone() const {
  return std::make_shared<BrownTerracottaItem>();
}

int BrownTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownTerracottaBlock().getId();
}