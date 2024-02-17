
#include "blue_glazed_terracotta_item.h"

#include "../block/blue_glazed_terracotta_block.h"

BlueGlazedTerracottaItem::BlueGlazedTerracottaItem() = default;
BlueGlazedTerracottaItem::~BlueGlazedTerracottaItem() = default;

int BlueGlazedTerracottaItem::getID() const {
  return 502;
}

std::shared_ptr<Item> BlueGlazedTerracottaItem::clone() const {
  return std::make_shared<BlueGlazedTerracottaItem>();
}

int BlueGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueGlazedTerracottaBlock().getId();
}
