
#include "lime_terracotta_item.h"

#include "../../block/builtin/lime_terracotta_block.h"

LimeTerracottaItem::LimeTerracottaItem() = default;
LimeTerracottaItem::~LimeTerracottaItem() = default;

int LimeTerracottaItem::getID() const {
  return 384;
}

std::shared_ptr<Item> LimeTerracottaItem::clone() const {
  return std::make_shared<LimeTerracottaItem>();
}

int LimeTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeTerracottaBlock().getId();
}