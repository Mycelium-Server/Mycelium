
#include "green_glazed_terracotta_item.h"

#include "../block/green_glazed_terracotta_block.h"

GreenGlazedTerracottaItem::GreenGlazedTerracottaItem() = default;
GreenGlazedTerracottaItem::~GreenGlazedTerracottaItem() = default;

int GreenGlazedTerracottaItem::getID() const {
  return 504;
}

std::shared_ptr<Item> GreenGlazedTerracottaItem::clone() const {
  return std::make_shared<GreenGlazedTerracottaItem>();
}

int GreenGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenGlazedTerracottaBlock().getId();
}