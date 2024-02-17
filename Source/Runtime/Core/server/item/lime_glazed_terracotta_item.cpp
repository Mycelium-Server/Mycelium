
#include "lime_glazed_terracotta_item.h"

#include "../block/lime_glazed_terracotta_block.h"

LimeGlazedTerracottaItem::LimeGlazedTerracottaItem() = default;
LimeGlazedTerracottaItem::~LimeGlazedTerracottaItem() = default;

int LimeGlazedTerracottaItem::getID() const {
  return 496;
}

std::shared_ptr<Item> LimeGlazedTerracottaItem::clone() const {
  return std::make_shared<LimeGlazedTerracottaItem>();
}

int LimeGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeGlazedTerracottaBlock().getId();
}