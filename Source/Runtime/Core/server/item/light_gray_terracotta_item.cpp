
#include "light_gray_terracotta_item.h"

#include "../block/light_gray_terracotta_block.h"

LightGrayTerracottaItem::LightGrayTerracottaItem() = default;
LightGrayTerracottaItem::~LightGrayTerracottaItem() = default;

int LightGrayTerracottaItem::getID() const {
  return 387;
}

std::shared_ptr<Item> LightGrayTerracottaItem::clone() const {
  return std::make_shared<LightGrayTerracottaItem>();
}

int LightGrayTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayTerracottaBlock().getId();
}