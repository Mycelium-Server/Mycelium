
#include "iron_block_item.h"

#include "../../block/builtin/iron_block_block.h"

IronBlockItem::IronBlockItem() = default;
IronBlockItem::~IronBlockItem() = default;

int IronBlockItem::getID() const {
  return 68;
}

std::shared_ptr<Item> IronBlockItem::clone() const {
  return std::make_shared<IronBlockItem>();
}

int IronBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return IronBlockBlock().getId();
}