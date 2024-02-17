
#include "cyan_glazed_terracotta_item.h"

#include "../../block/builtin/cyan_glazed_terracotta_block.h"

CyanGlazedTerracottaItem::CyanGlazedTerracottaItem() = default;
CyanGlazedTerracottaItem::~CyanGlazedTerracottaItem() = default;

int CyanGlazedTerracottaItem::getID() const {
  return 500;
}

std::shared_ptr<Item> CyanGlazedTerracottaItem::clone() const {
  return std::make_shared<CyanGlazedTerracottaItem>();
}

int CyanGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanGlazedTerracottaBlock().getId();
}
