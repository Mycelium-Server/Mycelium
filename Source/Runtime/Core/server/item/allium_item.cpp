
#include "allium_item.h"

#include "../block/allium_block.h"

AlliumItem::AlliumItem() = default;
AlliumItem::~AlliumItem() = default;

int AlliumItem::getID() const {
  return 186;
}

std::shared_ptr<Item> AlliumItem::clone() const {
  return std::make_shared<AlliumItem>();
}

int AlliumItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AlliumBlock().getId();
}