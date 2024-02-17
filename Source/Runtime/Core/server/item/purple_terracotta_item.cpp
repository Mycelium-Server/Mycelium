
#include "purple_terracotta_item.h"

#include "../block/purple_terracotta_block.h"

PurpleTerracottaItem::PurpleTerracottaItem() = default;
PurpleTerracottaItem::~PurpleTerracottaItem() = default;

int PurpleTerracottaItem::getID() const {
  return 389;
}

std::shared_ptr<Item> PurpleTerracottaItem::clone() const {
  return std::make_shared<PurpleTerracottaItem>();
}

int PurpleTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleTerracottaBlock().getId();
}