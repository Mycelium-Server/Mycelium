
#include "pink_glazed_terracotta_item.h"

#include "../block/pink_glazed_terracotta_block.h"

PinkGlazedTerracottaItem::PinkGlazedTerracottaItem() = default;
PinkGlazedTerracottaItem::~PinkGlazedTerracottaItem() = default;

int PinkGlazedTerracottaItem::getID() const {
  return 497;
}

std::shared_ptr<Item> PinkGlazedTerracottaItem::clone() const {
  return std::make_shared<PinkGlazedTerracottaItem>();
}

int PinkGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkGlazedTerracottaBlock().getId();
}