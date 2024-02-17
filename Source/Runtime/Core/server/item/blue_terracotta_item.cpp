
#include "blue_terracotta_item.h"

#include "../block/blue_terracotta_block.h"

BlueTerracottaItem::BlueTerracottaItem() = default;
BlueTerracottaItem::~BlueTerracottaItem() = default;

int BlueTerracottaItem::getID() const {
  return 390;
}

std::shared_ptr<Item> BlueTerracottaItem::clone() const {
  return std::make_shared<BlueTerracottaItem>();
}

int BlueTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueTerracottaBlock().getId();
}