
#include "white_concrete_powder_item.h"

#include "../../block/builtin/white_concrete_powder_block.h"

WhiteConcretePowderItem::WhiteConcretePowderItem() = default;
WhiteConcretePowderItem::~WhiteConcretePowderItem() = default;

int WhiteConcretePowderItem::getID() const {
  return 523;
}

std::shared_ptr<Item> WhiteConcretePowderItem::clone() const {
  return std::make_shared<WhiteConcretePowderItem>();
}

int WhiteConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteConcretePowderBlock().getId();
}