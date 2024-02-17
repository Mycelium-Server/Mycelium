
#include "brown_glazed_terracotta_item.h"

#include "../block/brown_glazed_terracotta_block.h"

BrownGlazedTerracottaItem::BrownGlazedTerracottaItem() = default;
BrownGlazedTerracottaItem::~BrownGlazedTerracottaItem() = default;

int BrownGlazedTerracottaItem::getID() const {
  return 503;
}

std::shared_ptr<Item> BrownGlazedTerracottaItem::clone() const {
  return std::make_shared<BrownGlazedTerracottaItem>();
}

int BrownGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownGlazedTerracottaBlock().getId();
}