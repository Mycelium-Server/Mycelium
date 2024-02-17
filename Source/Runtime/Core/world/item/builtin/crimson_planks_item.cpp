
#include "crimson_planks_item.h"

#include "../../block/builtin/crimson_planks_block.h"

CrimsonPlanksItem::CrimsonPlanksItem() = default;
CrimsonPlanksItem::~CrimsonPlanksItem() = default;

int CrimsonPlanksItem::getID() const {
  return 30;
}

std::shared_ptr<Item> CrimsonPlanksItem::clone() const {
  return std::make_shared<CrimsonPlanksItem>();
}

int CrimsonPlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonPlanksBlock().getId();
}