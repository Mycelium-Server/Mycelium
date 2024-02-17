
#include "iron_trapdoor_item.h"

#include "../block/iron_trapdoor_block.h"

IronTrapdoorItem::IronTrapdoorItem() = default;
IronTrapdoorItem::~IronTrapdoorItem() = default;

int IronTrapdoorItem::getID() const {
  return 666;
}

std::shared_ptr<Item> IronTrapdoorItem::clone() const {
  return std::make_shared<IronTrapdoorItem>();
}

int IronTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return IronTrapdoorBlock().getId();
}
