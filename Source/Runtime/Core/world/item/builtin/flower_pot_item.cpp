
#include "flower_pot_item.h"

#include "../../block/builtin/flower_pot_block.h"

FlowerPotItem::FlowerPotItem() = default;
FlowerPotItem::~FlowerPotItem() = default;

int FlowerPotItem::getID() const {
  return 989;
}

std::shared_ptr<Item> FlowerPotItem::clone() const {
  return std::make_shared<FlowerPotItem>();
}

int FlowerPotItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FlowerPotBlock().getId();
}