
#include "light_gray_glazed_terracotta_item.h"

#include "../../block/builtin/light_gray_glazed_terracotta_block.h"

LightGrayGlazedTerracottaItem::LightGrayGlazedTerracottaItem() = default;
LightGrayGlazedTerracottaItem::~LightGrayGlazedTerracottaItem() = default;

int LightGrayGlazedTerracottaItem::getID() const {
  return 499;
}

std::shared_ptr<Item> LightGrayGlazedTerracottaItem::clone() const {
  return std::make_shared<LightGrayGlazedTerracottaItem>();
}

int LightGrayGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayGlazedTerracottaBlock().getId();
}
