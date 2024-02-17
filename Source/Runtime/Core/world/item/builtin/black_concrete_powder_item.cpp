
#include "black_concrete_powder_item.h"

#include "../../block/builtin/black_concrete_powder_block.h"

BlackConcretePowderItem::BlackConcretePowderItem() = default;
BlackConcretePowderItem::~BlackConcretePowderItem() = default;

int BlackConcretePowderItem::getID() const {
  return 538;
}

std::shared_ptr<Item> BlackConcretePowderItem::clone() const {
  return std::make_shared<BlackConcretePowderItem>();
}

int BlackConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackConcretePowderBlock().getId();
}