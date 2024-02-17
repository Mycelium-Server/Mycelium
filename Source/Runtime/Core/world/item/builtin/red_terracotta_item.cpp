
#include "red_terracotta_item.h"

#include "../../block/builtin/red_terracotta_block.h"

RedTerracottaItem::RedTerracottaItem() = default;
RedTerracottaItem::~RedTerracottaItem() = default;

int RedTerracottaItem::getID() const {
  return 393;
}

std::shared_ptr<Item> RedTerracottaItem::clone() const {
  return std::make_shared<RedTerracottaItem>();
}

int RedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedTerracottaBlock().getId();
}