
#include "red_mushroom_item.h"

#include "../block/red_mushroom_block.h"

RedMushroomItem::RedMushroomItem() = default;
RedMushroomItem::~RedMushroomItem() = default;

int RedMushroomItem::getID() const {
  return 198;
}

std::shared_ptr<Item> RedMushroomItem::clone() const {
  return std::make_shared<RedMushroomItem>();
}

int RedMushroomItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedMushroomBlock().getId();
}