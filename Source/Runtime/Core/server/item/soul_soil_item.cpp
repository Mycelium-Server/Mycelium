
#include "soul_soil_item.h"

#include "../block/soul_soil_block.h"

SoulSoilItem::SoulSoilItem() = default;
SoulSoilItem::~SoulSoilItem() = default;

int SoulSoilItem::getID() const {
  return 282;
}

std::shared_ptr<Item> SoulSoilItem::clone() const {
  return std::make_shared<SoulSoilItem>();
}

int SoulSoilItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SoulSoilBlock().getId();
}
