
#include "red_concrete_powder_item.h"

#include "../block/red_concrete_powder_block.h"

RedConcretePowderItem::RedConcretePowderItem() = default;
RedConcretePowderItem::~RedConcretePowderItem() = default;

int RedConcretePowderItem::getID() const {
  return 537;
}

std::shared_ptr<Item> RedConcretePowderItem::clone() const {
  return std::make_shared<RedConcretePowderItem>();
}

int RedConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedConcretePowderBlock().getId();
}
