
#include "gray_terracotta_item.h"

#include "../block/gray_terracotta_block.h"

GrayTerracottaItem::GrayTerracottaItem() = default;
GrayTerracottaItem::~GrayTerracottaItem() = default;

int GrayTerracottaItem::getID() const {
  return 386;
}

std::shared_ptr<Item> GrayTerracottaItem::clone() const {
  return std::make_shared<GrayTerracottaItem>();
}

int GrayTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayTerracottaBlock().getId();
}