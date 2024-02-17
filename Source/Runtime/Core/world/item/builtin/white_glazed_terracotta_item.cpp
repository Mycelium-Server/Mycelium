
#include "white_glazed_terracotta_item.h"

#include "../../block/builtin/white_glazed_terracotta_block.h"

WhiteGlazedTerracottaItem::WhiteGlazedTerracottaItem() = default;
WhiteGlazedTerracottaItem::~WhiteGlazedTerracottaItem() = default;

int WhiteGlazedTerracottaItem::getID() const {
  return 491;
}

std::shared_ptr<Item> WhiteGlazedTerracottaItem::clone() const {
  return std::make_shared<WhiteGlazedTerracottaItem>();
}

int WhiteGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteGlazedTerracottaBlock().getId();
}