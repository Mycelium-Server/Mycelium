
#include "white_terracotta_item.h"

#include "../../block/builtin/white_terracotta_block.h"

WhiteTerracottaItem::WhiteTerracottaItem() = default;
WhiteTerracottaItem::~WhiteTerracottaItem() = default;

int WhiteTerracottaItem::getID() const {
  return 379;
}

std::shared_ptr<Item> WhiteTerracottaItem::clone() const {
  return std::make_shared<WhiteTerracottaItem>();
}

int WhiteTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteTerracottaBlock().getId();
}