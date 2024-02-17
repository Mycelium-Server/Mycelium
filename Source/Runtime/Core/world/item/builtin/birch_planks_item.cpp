
#include "birch_planks_item.h"

#include "../../block/builtin/birch_planks_block.h"

BirchPlanksItem::BirchPlanksItem() = default;
BirchPlanksItem::~BirchPlanksItem() = default;

int BirchPlanksItem::getID() const {
  return 25;
}

std::shared_ptr<Item> BirchPlanksItem::clone() const {
  return std::make_shared<BirchPlanksItem>();
}

int BirchPlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchPlanksBlock().getId();
}