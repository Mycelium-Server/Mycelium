
#include "polished_blackstone_bricks_item.h"

#include "../block/polished_blackstone_bricks_block.h"

PolishedBlackstoneBricksItem::PolishedBlackstoneBricksItem() = default;
PolishedBlackstoneBricksItem::~PolishedBlackstoneBricksItem() = default;

int PolishedBlackstoneBricksItem::getID() const {
  return 1120;
}

std::shared_ptr<Item> PolishedBlackstoneBricksItem::clone() const {
  return std::make_shared<PolishedBlackstoneBricksItem>();
}

int PolishedBlackstoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedBlackstoneBricksBlock().getId();
}