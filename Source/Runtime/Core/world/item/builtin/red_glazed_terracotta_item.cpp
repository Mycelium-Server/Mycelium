
#include "red_glazed_terracotta_item.h"

#include "../../block/builtin/red_glazed_terracotta_block.h"

RedGlazedTerracottaItem::RedGlazedTerracottaItem() = default;
RedGlazedTerracottaItem::~RedGlazedTerracottaItem() = default;

int RedGlazedTerracottaItem::getID() const {
  return 505;
}

std::shared_ptr<Item> RedGlazedTerracottaItem::clone() const {
  return std::make_shared<RedGlazedTerracottaItem>();
}

int RedGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedGlazedTerracottaBlock().getId();
}