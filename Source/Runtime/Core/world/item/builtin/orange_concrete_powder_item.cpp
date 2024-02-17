
#include "orange_concrete_powder_item.h"

#include "../../block/builtin/orange_concrete_powder_block.h"

OrangeConcretePowderItem::OrangeConcretePowderItem() = default;
OrangeConcretePowderItem::~OrangeConcretePowderItem() = default;

int OrangeConcretePowderItem::getID() const {
  return 524;
}

std::shared_ptr<Item> OrangeConcretePowderItem::clone() const {
  return std::make_shared<OrangeConcretePowderItem>();
}

int OrangeConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeConcretePowderBlock().getId();
}