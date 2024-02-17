
#include "black_glazed_terracotta_item.h"

#include "../../block/builtin/black_glazed_terracotta_block.h"

BlackGlazedTerracottaItem::BlackGlazedTerracottaItem() = default;
BlackGlazedTerracottaItem::~BlackGlazedTerracottaItem() = default;

int BlackGlazedTerracottaItem::getID() const {
  return 506;
}

std::shared_ptr<Item> BlackGlazedTerracottaItem::clone() const {
  return std::make_shared<BlackGlazedTerracottaItem>();
}

int BlackGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackGlazedTerracottaBlock().getId();
}