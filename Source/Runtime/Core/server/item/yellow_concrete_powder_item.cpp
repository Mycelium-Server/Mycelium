
#include "yellow_concrete_powder_item.h"

#include "../block/yellow_concrete_powder_block.h"

YellowConcretePowderItem::YellowConcretePowderItem() = default;
YellowConcretePowderItem::~YellowConcretePowderItem() = default;

int YellowConcretePowderItem::getID() const {
  return 527;
}

std::shared_ptr<Item> YellowConcretePowderItem::clone() const {
  return std::make_shared<YellowConcretePowderItem>();
}

int YellowConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowConcretePowderBlock().getId();
}
