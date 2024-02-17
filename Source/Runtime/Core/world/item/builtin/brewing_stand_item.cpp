
#include "brewing_stand_item.h"

#include "../../block/builtin/brewing_stand_block.h"

BrewingStandItem::BrewingStandItem() = default;
BrewingStandItem::~BrewingStandItem() = default;

int BrewingStandItem::getID() const {
  return 908;
}

std::shared_ptr<Item> BrewingStandItem::clone() const {
  return std::make_shared<BrewingStandItem>();
}

int BrewingStandItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrewingStandBlock().getId();
}