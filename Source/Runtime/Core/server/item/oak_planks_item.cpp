
#include "oak_planks_item.h"

#include "../block/oak_planks_block.h"

OakPlanksItem::OakPlanksItem() = default;
OakPlanksItem::~OakPlanksItem() = default;

int OakPlanksItem::getID() const {
  return 23;
}

std::shared_ptr<Item> OakPlanksItem::clone() const {
  return std::make_shared<OakPlanksItem>();
}

int OakPlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakPlanksBlock().getId();
}
