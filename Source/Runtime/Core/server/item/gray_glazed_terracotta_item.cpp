
#include "gray_glazed_terracotta_item.h"

#include "../block/gray_glazed_terracotta_block.h"

GrayGlazedTerracottaItem::GrayGlazedTerracottaItem() = default;
GrayGlazedTerracottaItem::~GrayGlazedTerracottaItem() = default;

int GrayGlazedTerracottaItem::getID() const {
  return 498;
}

std::shared_ptr<Item> GrayGlazedTerracottaItem::clone() const {
  return std::make_shared<GrayGlazedTerracottaItem>();
}

int GrayGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayGlazedTerracottaBlock().getId();
}