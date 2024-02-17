
#include "warped_planks_item.h"

#include "../block/warped_planks_block.h"

WarpedPlanksItem::WarpedPlanksItem() = default;
WarpedPlanksItem::~WarpedPlanksItem() = default;

int WarpedPlanksItem::getID() const {
  return 31;
}

std::shared_ptr<Item> WarpedPlanksItem::clone() const {
  return std::make_shared<WarpedPlanksItem>();
}

int WarpedPlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WarpedPlanksBlock().getId();
}