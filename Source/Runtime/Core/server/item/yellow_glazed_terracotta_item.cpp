
#include "yellow_glazed_terracotta_item.h"

#include "../block/yellow_glazed_terracotta_block.h"

YellowGlazedTerracottaItem::YellowGlazedTerracottaItem() = default;
YellowGlazedTerracottaItem::~YellowGlazedTerracottaItem() = default;

int YellowGlazedTerracottaItem::getID() const {
  return 495;
}

std::shared_ptr<Item> YellowGlazedTerracottaItem::clone() const {
  return std::make_shared<YellowGlazedTerracottaItem>();
}

int YellowGlazedTerracottaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowGlazedTerracottaBlock().getId();
}