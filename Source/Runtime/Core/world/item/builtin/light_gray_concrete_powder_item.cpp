
#include "light_gray_concrete_powder_item.h"

#include "../../block/builtin/light_gray_concrete_powder_block.h"

LightGrayConcretePowderItem::LightGrayConcretePowderItem() = default;
LightGrayConcretePowderItem::~LightGrayConcretePowderItem() = default;

int LightGrayConcretePowderItem::getID() const {
  return 531;
}

std::shared_ptr<Item> LightGrayConcretePowderItem::clone() const {
  return std::make_shared<LightGrayConcretePowderItem>();
}

int LightGrayConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayConcretePowderBlock().getId();
}