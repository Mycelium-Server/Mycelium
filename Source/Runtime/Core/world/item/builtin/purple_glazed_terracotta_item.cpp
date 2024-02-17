
#include "purple_glazed_terracotta_item.h"

#include "../../block/builtin/purple_glazed_terracotta_block.h"

PurpleGlazedTerracottaItem::PurpleGlazedTerracottaItem() = default;
PurpleGlazedTerracottaItem::~PurpleGlazedTerracottaItem() = default;

int PurpleGlazedTerracottaItem::getID() const {
  return 501;
}

std::shared_ptr<Item> PurpleGlazedTerracottaItem::clone() const {
  return std::make_shared<PurpleGlazedTerracottaItem>();
}

int PurpleGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleGlazedTerracottaBlock().getId();
}