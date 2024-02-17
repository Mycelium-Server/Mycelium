
#include "gray_concrete_powder_item.h"

#include "../../block/builtin/gray_concrete_powder_block.h"

GrayConcretePowderItem::GrayConcretePowderItem() = default;
GrayConcretePowderItem::~GrayConcretePowderItem() = default;

int GrayConcretePowderItem::getID() const {
  return 530;
}

std::shared_ptr<Item> GrayConcretePowderItem::clone() const {
  return std::make_shared<GrayConcretePowderItem>();
}

int GrayConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayConcretePowderBlock().getId();
}