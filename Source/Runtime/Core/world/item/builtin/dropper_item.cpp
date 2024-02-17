
#include "dropper_item.h"

#include "../../block/builtin/dropper_block.h"

DropperItem::DropperItem() = default;
DropperItem::~DropperItem() = default;

int DropperItem::getID() const {
  return 620;
}

std::shared_ptr<Item> DropperItem::clone() const {
  return std::make_shared<DropperItem>();
}

int DropperItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DropperBlock().getId();
}