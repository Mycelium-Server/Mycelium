
#include "green_terracotta_item.h"

#include "../block/green_terracotta_block.h"

GreenTerracottaItem::GreenTerracottaItem() = default;
GreenTerracottaItem::~GreenTerracottaItem() = default;

int GreenTerracottaItem::getID() const {
  return 392;
}

std::shared_ptr<Item> GreenTerracottaItem::clone() const {
  return std::make_shared<GreenTerracottaItem>();
}

int GreenTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenTerracottaBlock().getId();
}