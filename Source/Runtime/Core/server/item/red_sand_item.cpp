
#include "red_sand_item.h"

#include "../block/red_sand_block.h"

RedSandItem::RedSandItem() = default;
RedSandItem::~RedSandItem() = default;

int RedSandItem::getID() const {
  return 41;
}

std::shared_ptr<Item> RedSandItem::clone() const {
  return std::make_shared<RedSandItem>();
}

int RedSandItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedSandBlock().getId();
}