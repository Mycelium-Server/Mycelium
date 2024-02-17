
#include "terracotta_item.h"

#include "../block/terracotta_block.h"

TerracottaItem::TerracottaItem() = default;
TerracottaItem::~TerracottaItem() = default;

int TerracottaItem::getID() const {
  return 414;
}

std::shared_ptr<Item> TerracottaItem::clone() const {
  return std::make_shared<TerracottaItem>();
}

int TerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TerracottaBlock().getId();
}