
#include "red_nether_bricks_item.h"

#include "../../block/builtin/red_nether_bricks_block.h"

RedNetherBricksItem::RedNetherBricksItem() = default;
RedNetherBricksItem::~RedNetherBricksItem() = default;

int RedNetherBricksItem::getID() const {
  return 471;
}

std::shared_ptr<Item> RedNetherBricksItem::clone() const {
  return std::make_shared<RedNetherBricksItem>();
}

int RedNetherBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedNetherBricksBlock().getId();
}