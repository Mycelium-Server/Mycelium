
#include "green_concrete_powder_item.h"

#include "../../block/builtin/green_concrete_powder_block.h"

GreenConcretePowderItem::GreenConcretePowderItem() = default;
GreenConcretePowderItem::~GreenConcretePowderItem() = default;

int GreenConcretePowderItem::getID() const {
  return 536;
}

std::shared_ptr<Item> GreenConcretePowderItem::clone() const {
  return std::make_shared<GreenConcretePowderItem>();
}

int GreenConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenConcretePowderBlock().getId();
}
