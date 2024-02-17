
#include "yellow_terracotta_item.h"

#include "../../block/builtin/yellow_terracotta_block.h"

YellowTerracottaItem::YellowTerracottaItem() = default;
YellowTerracottaItem::~YellowTerracottaItem() = default;

int YellowTerracottaItem::getID() const {
  return 383;
}

std::shared_ptr<Item> YellowTerracottaItem::clone() const {
  return std::make_shared<YellowTerracottaItem>();
}

int YellowTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowTerracottaBlock().getId();
}
