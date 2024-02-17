
#include "pink_concrete_powder_item.h"

#include "../block/pink_concrete_powder_block.h"

PinkConcretePowderItem::PinkConcretePowderItem() = default;
PinkConcretePowderItem::~PinkConcretePowderItem() = default;

int PinkConcretePowderItem::getID() const {
  return 529;
}

std::shared_ptr<Item> PinkConcretePowderItem::clone() const {
  return std::make_shared<PinkConcretePowderItem>();
}

int PinkConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkConcretePowderBlock().getId();
}
