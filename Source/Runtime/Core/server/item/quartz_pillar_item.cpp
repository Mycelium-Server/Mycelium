
#include "quartz_pillar_item.h"

#include "../block/quartz_pillar_block.h"

QuartzPillarItem::QuartzPillarItem() = default;
QuartzPillarItem::~QuartzPillarItem() = default;

int QuartzPillarItem::getID() const {
  return 377;
}

std::shared_ptr<Item> QuartzPillarItem::clone() const {
  return std::make_shared<QuartzPillarItem>();
}

int QuartzPillarItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return QuartzPillarBlock().getId();
}