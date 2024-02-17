
#include "flowering_azalea_leaves_item.h"

#include "../block/flowering_azalea_leaves_block.h"

FloweringAzaleaLeavesItem::FloweringAzaleaLeavesItem() = default;
FloweringAzaleaLeavesItem::~FloweringAzaleaLeavesItem() = default;

int FloweringAzaleaLeavesItem::getID() const {
  return 150;
}

std::shared_ptr<Item> FloweringAzaleaLeavesItem::clone() const {
  return std::make_shared<FloweringAzaleaLeavesItem>();
}

int FloweringAzaleaLeavesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FloweringAzaleaLeavesBlock().getId();
}
