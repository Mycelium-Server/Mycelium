
#include "cyan_terracotta_item.h"

#include "../block/cyan_terracotta_block.h"

CyanTerracottaItem::CyanTerracottaItem() = default;
CyanTerracottaItem::~CyanTerracottaItem() = default;

int CyanTerracottaItem::getID() const {
  return 388;
}

std::shared_ptr<Item> CyanTerracottaItem::clone() const {
  return std::make_shared<CyanTerracottaItem>();
}

int CyanTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanTerracottaBlock().getId();
}