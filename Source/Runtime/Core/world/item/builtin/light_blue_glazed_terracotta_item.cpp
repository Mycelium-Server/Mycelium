
#include "light_blue_glazed_terracotta_item.h"

#include "../../block/builtin/light_blue_glazed_terracotta_block.h"

LightBlueGlazedTerracottaItem::LightBlueGlazedTerracottaItem() = default;
LightBlueGlazedTerracottaItem::~LightBlueGlazedTerracottaItem() = default;

int LightBlueGlazedTerracottaItem::getID() const {
  return 494;
}

std::shared_ptr<Item> LightBlueGlazedTerracottaItem::clone() const {
  return std::make_shared<LightBlueGlazedTerracottaItem>();
}

int LightBlueGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueGlazedTerracottaBlock().getId();
}