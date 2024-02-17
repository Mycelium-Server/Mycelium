
#include "dark_oak_planks_item.h"

#include "../../block/builtin/dark_oak_planks_block.h"

DarkOakPlanksItem::DarkOakPlanksItem() = default;
DarkOakPlanksItem::~DarkOakPlanksItem() = default;

int DarkOakPlanksItem::getID() const {
  return 28;
}

std::shared_ptr<Item> DarkOakPlanksItem::clone() const {
  return std::make_shared<DarkOakPlanksItem>();
}

int DarkOakPlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakPlanksBlock().getId();
}
