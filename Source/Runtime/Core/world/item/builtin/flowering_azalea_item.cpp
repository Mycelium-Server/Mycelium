
#include "flowering_azalea_item.h"

#include "../../block/builtin/flowering_azalea_block.h"

FloweringAzaleaItem::FloweringAzaleaItem() = default;
FloweringAzaleaItem::~FloweringAzaleaItem() = default;

int FloweringAzaleaItem::getID() const {
  return 163;
}

std::shared_ptr<Item> FloweringAzaleaItem::clone() const {
  return std::make_shared<FloweringAzaleaItem>();
}

int FloweringAzaleaItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FloweringAzaleaBlock().getId();
}