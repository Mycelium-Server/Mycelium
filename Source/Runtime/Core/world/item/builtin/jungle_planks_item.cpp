
#include "jungle_planks_item.h"

#include "../../block/builtin/jungle_planks_block.h"

JunglePlanksItem::JunglePlanksItem() = default;
JunglePlanksItem::~JunglePlanksItem() = default;

int JunglePlanksItem::getID() const {
  return 26;
}

std::shared_ptr<Item> JunglePlanksItem::clone() const {
  return std::make_shared<JunglePlanksItem>();
}

int JunglePlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JunglePlanksBlock().getId();
}
