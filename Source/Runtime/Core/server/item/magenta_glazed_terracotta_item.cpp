
#include "magenta_glazed_terracotta_item.h"

#include "../block/magenta_glazed_terracotta_block.h"

MagentaGlazedTerracottaItem::MagentaGlazedTerracottaItem() = default;
MagentaGlazedTerracottaItem::~MagentaGlazedTerracottaItem() = default;

int MagentaGlazedTerracottaItem::getID() const {
  return 493;
}

std::shared_ptr<Item> MagentaGlazedTerracottaItem::clone() const {
  return std::make_shared<MagentaGlazedTerracottaItem>();
}

int MagentaGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaGlazedTerracottaBlock().getId();
}
