
#include "pink_terracotta_item.h"

#include "../block/pink_terracotta_block.h"

PinkTerracottaItem::PinkTerracottaItem() = default;
PinkTerracottaItem::~PinkTerracottaItem() = default;

int PinkTerracottaItem::getID() const {
  return 385;
}

std::shared_ptr<Item> PinkTerracottaItem::clone() const {
  return std::make_shared<PinkTerracottaItem>();
}

int PinkTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkTerracottaBlock().getId();
}