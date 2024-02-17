
#include "purpur_pillar_item.h"

#include "../block/purpur_pillar_block.h"

PurpurPillarItem::PurpurPillarItem() = default;
PurpurPillarItem::~PurpurPillarItem() = default;

int PurpurPillarItem::getID() const {
  return 253;
}

std::shared_ptr<Item> PurpurPillarItem::clone() const {
  return std::make_shared<PurpurPillarItem>();
}

int PurpurPillarItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpurPillarBlock().getId();
}